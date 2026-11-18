// PSP MPEG ABI: pspsdk pspmpeg.h. Decode actual, header-matched disc content.
struct DivaMpegState {
    std::uint32_t handle=0,ring=0,width=512,offset=0,stream_size=0,put=0,taken=0,frames=0;
    std::size_t packet=0;bool pending=false,last_frame=false;std::array<bool,2> es{};
    std::map<std::uint32_t,unsigned> streams;
    struct AudioUnit {std::vector<std::uint8_t> bytes;std::int64_t pts;std::uint32_t required;};
    std::vector<AudioUnit> audio;std::size_t audio_packet=0;bool audio_pending=false;
    std::vector<std::uint8_t> original;
} diva_mpeg_;
std::map<std::uint32_t,std::uint64_t> diva_mpeg_calls_;
void diva_mpeg_audio(){
    auto& s=diva_mpeg_;const auto& data=s.original;
    struct Span {std::size_t begin,end;std::uint32_t required;std::int64_t pts;};std::vector<Span> spans;std::vector<std::uint8_t> elementary;
    auto pts=[](const std::uint8_t* p){return std::int64_t((std::uint64_t((p[0]>>1)&7)<<30)|(std::uint64_t(p[1])<<22)|(std::uint64_t(p[2]>>1)<<15)|(std::uint64_t(p[3])<<7)|(p[4]>>1));};
    for(std::size_t pack=s.offset;pack+2048<=data.size();pack+=2048){
        for(std::size_t at=pack;at+6<=pack+2048;){
            if(data[at]!=0 || data[at+1]!=0 || data[at+2]!=1){++at;continue;}
            const auto id=data[at+3];
            if(id==0xBA){if(at+14>pack+2048)break;at+=14+(data[at+13]&7);continue;}
            if(id==0xB9)break;
            const auto length=(unsigned(data[at+4])<<8)|data[at+5];const auto end=at+6+length;
            if(end>pack+2048 || end<=at)break;
            if(id==0xBD && length>=7 && (data[at+6]&0xC0)==0x80){
                const auto header=data[at+8];const auto payload=at+9+header;
                if(payload+4<=end && data[payload]==0){
                    std::int64_t timestamp=-1;if((data[at+7]&0x80) && header>=5)timestamp=pts(data.data()+at+9);
                    auto begin=elementary.size();elementary.insert(elementary.end(),data.begin()+payload+4,data.begin()+end);
                    spans.push_back({begin,elementary.size(),std::uint32_t((pack-s.offset)/2048+1),timestamp});
                }
            }at=end;
        }
    }
    std::size_t span=0;std::int64_t next_pts=90000;std::uint64_t samples=0;
    for(std::size_t at=0;at+8<=elementary.size();){
        if(elementary[at]!=15 || elementary[at+1]!=208){++at;continue;}
        const auto length=16+((((elementary[at+2]&3)<<8)|elementary[at+3])*8);if(at+length>elementary.size())break;
        while(span+1<spans.size() && spans[span].end<=at)++span;
        std::size_t ending=span;while(ending+1<spans.size() && spans[ending].end<at+length)++ending;
        if(spans[span].pts>=0){next_pts=spans[span].pts;spans[span].pts=-1;samples=0;}
        DivaMpegState::AudioUnit unit;unit.pts=next_pts+samples*90000/44100;unit.required=spans[ending].required;unit.bytes.assign(elementary.begin()+at,elementary.begin()+at+length);s.audio.push_back(std::move(unit));
        samples+=2048;at+=length;
    }
    calls.push_back("DivaMpegAudio original_atrac_frames="+std::to_string(s.audio.size()));
}
std::uint32_t diva_mpeg_be(std::uint32_t address){
    return (std::uint32_t(rt.memory().load8(address))<<24)|(std::uint32_t(rt.memory().load8(address+1))<<16)|(std::uint32_t(rt.memory().load8(address+2))<<8)|rt.memory().load8(address+3);
}
void diva_mpeg_au(std::uint32_t pointer,std::int64_t pts,std::int64_t dts,std::uint32_t size){
    rt.memory().store32(pointer,static_cast<std::uint64_t>(pts)>>32);rt.memory().store32(pointer+4,pts);
    rt.memory().store32(pointer+8,static_cast<std::uint64_t>(dts)>>32);rt.memory().store32(pointer+12,dts);rt.memory().store32(pointer+20,size);
}
bool diva_mpeg_header(std::uint32_t header){
    auto& state=diva_mpeg_;auto& memory=rt.memory();
    if(!memory.contains(header,2048) || memory.load32(header)!=0x464D5350u)return false;
    const auto offset=diva_mpeg_be(header+8),size=diva_mpeg_be(header+12);
    if(!offset || offset%2048 || !size || size>128*1024*1024u)return false;
    const auto directory=content_.resolve_directory("disc0:/PSP_GAME/USRDIR/media/movie");
    for(const auto& entry:std::filesystem::directory_iterator(directory)){
        if(!entry.is_regular_file() || entry.file_size()<std::uint64_t(offset)+size || entry.file_size()>128*1024*1024u)continue;
        std::ifstream file(entry.path(),std::ios::binary);std::array<std::uint8_t,2048> first{};file.read(reinterpret_cast<char*>(first.data()),first.size());
        bool matches=bool(file);for(unsigned i=0;matches && i<first.size();++i)matches=first[i]==memory.load8(header+i);
        if(!matches)continue;
        file.seekg(0);state.original.resize(entry.file_size());file.read(reinterpret_cast<char*>(state.original.data()),state.original.size());if(!file)throw std::runtime_error("Cannot read original PSMF");
        media_.open_movie(entry.path());state.offset=offset;state.stream_size=size;state.packet=0;state.pending=false;state.put=state.taken=state.frames=0;
        state.audio.clear();state.audio_packet=0;state.audio_pending=false;diva_mpeg_audio();
        calls.push_back("DivaMpegMovie file="+entry.path().filename().string()+" packets="+std::to_string(media_.movie_packets()));return true;
    }return false;
}
std::vector<CodecWrite> diva_mpeg_frame(const kon::MovieFrame& frame,std::uint32_t destination,std::uint32_t stride,std::uint32_t status){
    std::vector<CodecWrite> writes;
    if(status){std::vector<std::uint8_t> value(4,0);value[0]=frame.rgba.empty()?0:1;writes.push_back({status,std::move(value)});}
    if(frame.rgba.empty())return writes;
    if(stride<frame.width || stride>2048 || !rt.memory().contains(destination,std::size_t(stride)*frame.height*4))throw std::runtime_error("Invalid PSMF output buffer");
    renderer_.drain();
    for(unsigned y=0;y<frame.height;++y){std::vector<std::uint8_t> row(frame.width*4);
        for(unsigned x=0;x<frame.width;++x){const auto pixel=frame.rgba[std::size_t(y)*frame.width+x];row[x*4]=pixel;row[x*4+1]=pixel>>8;row[x*4+2]=pixel>>16;row[x*4+3]=0;}
        writes.push_back({destination+y*stride*4,std::move(row)});
    }
    ++diva_mpeg_.frames;
    if(diva_mpeg_.frames<=3 || diva_mpeg_.frames%300==0)calls.push_back("DivaMpegDecoded frames="+std::to_string(diva_mpeg_.frames)+" width="+std::to_string(frame.width)+" height="+std::to_string(frame.height));
    return writes;
}
void install_diva_mpeg(){
    auto add=[&](std::uint32_t nid,const char* name,auto handler){rt.nids().add("sceMpeg",nid,name);rt.register_hle("sceMpeg",nid,[this,nid,name,handler](auto& runtime,auto& context){
        auto count=++diva_mpeg_calls_[nid];if(count<=8 || count%512==0)calls.push_back(std::string("DivaMpegCall ")+name+" count="+std::to_string(count)+" packet="+std::to_string(diva_mpeg_.packet)+" put="+std::to_string(diva_mpeg_.put)+" taken="+std::to_string(diva_mpeg_.taken)+" a0="+psprecomp::hex32(context.gpr[4])+" a1="+psprecomp::hex32(context.gpr[5]));
        handler(runtime,context);
    });};
    add(0xD7A29F46u,"sceMpegRingbufferQueryMemSize",[](auto&,auto& c){c.set_gpr(2,c.gpr[4]>0xFFFFFu?0x806101FEu:c.gpr[4]*2152u);});
    add(0xC132E22Fu,"sceMpegQueryMemSize",[](auto&,auto& c){c.set_gpr(2,65536);});
    add(0x37295ED8u,"sceMpegRingbufferConstruct",[this](auto&,auto& c){
        const auto rb=c.gpr[4],packets=c.gpr[5],data=c.gpr[6],size=c.gpr[7];
        if(!packets || packets>0xFFFFFu || std::uint64_t(packets)*2152>size || !rt.memory().contains(rb,48) || !rt.memory().contains(data,std::size_t(packets)*2048)){c.set_gpr(2,0x80610022u);return;}
        const std::uint32_t words[]{packets,0,0,0,2048,data,c.gpr[8],c.gpr[9],data+packets*2048,0,0,c.gpr[28]};
        for(unsigned i=0;i<12;++i)rt.memory().store32(rb+i*4,words[i]);c.set_gpr(2,0);
    });
    add(0x13407F13u,"sceMpegRingbufferDestruct",[](auto&,auto& c){c.set_gpr(2,0);});
    add(0xD8C5F121u,"sceMpegCreate",[this](auto&,auto& c){
        if(c.gpr[6]<65536 || !rt.memory().contains(c.gpr[5],65536)){c.set_gpr(2,0x80610022u);return;}
        diva_mpeg_={};auto& s=diva_mpeg_;s.handle=c.gpr[5]+48;s.ring=c.gpr[7];s.width=c.gpr[8]?c.gpr[8]:512;
        rt.memory().store32(c.gpr[4],s.handle);const char signature[]{"LIBMPEG\0001"};for(unsigned i=0;i<sizeof(signature);++i)rt.memory().store8(s.handle+i,signature[i]);
        if(s.ring)rt.memory().store32(s.ring+40,c.gpr[4]);c.set_gpr(2,0);calls.push_back("DivaMpegCreate ring="+psprecomp::hex32(s.ring));
    });
    add(0x606A4649u,"sceMpegDelete",[this](auto&,auto& c){calls.push_back("DivaMpegDelete decoded_frames="+std::to_string(diva_mpeg_.frames));diva_mpeg_={};c.set_gpr(2,0);});
    add(0x42560F23u,"sceMpegRegistStream",[this](auto&,auto& c){const auto id=std::uint32_t(diva_mpeg_.streams.size()+1);diva_mpeg_.streams[id]=c.gpr[5];c.set_gpr(2,id);});
    add(0x591A4AA2u,"sceMpegUnRegistStream",[this](auto&,auto& c){diva_mpeg_.streams.erase(c.gpr[5]);c.set_gpr(2,0);});
    add(0xA780CF7Eu,"sceMpegMallocAvcEsBuf",[this](auto&,auto& c){for(unsigned i=0;i<2;++i)if(!diva_mpeg_.es[i]){diva_mpeg_.es[i]=true;c.set_gpr(2,i+1);return;}c.set_gpr(2,0);});
    add(0xCEB870B1u,"sceMpegFreeAvcEsBuf",[this](auto&,auto& c){if(c.gpr[5]>=1 && c.gpr[5]<=2)diva_mpeg_.es[c.gpr[5]-1]=false;c.set_gpr(2,0);});
    add(0x167AFD9Eu,"sceMpegInitAu",[this](auto&,auto& c){diva_mpeg_au(c.gpr[6],-1,-1,0);rt.memory().store32(c.gpr[6]+16,c.gpr[5]);c.set_gpr(2,0);});
    add(0xF8DCB679u,"sceMpegQueryAtracEsSize",[this](auto&,auto& c){rt.memory().store32(c.gpr[5],2112);rt.memory().store32(c.gpr[6],8192);c.set_gpr(2,0);});
    add(0x21FF80E4u,"sceMpegQueryStreamOffset",[this](auto&,auto& c){const bool valid=diva_mpeg_header(c.gpr[5]);rt.memory().store32(c.gpr[6],valid?diva_mpeg_.offset:0);c.set_gpr(2,valid?0:0x806101FEu);});
    add(0x611E9E11u,"sceMpegQueryStreamSize",[this](auto&,auto& c){const bool valid=rt.memory().contains(c.gpr[4],16) && rt.memory().load32(c.gpr[4])==0x464D5350u;rt.memory().store32(c.gpr[5],valid?diva_mpeg_be(c.gpr[4]+12):0);c.set_gpr(2,valid?0:0x806101FEu);});
    add(0xB5F6DC87u,"sceMpegRingbufferAvailableSize",[this](auto&,auto& c){const auto rb=c.gpr[4];c.set_gpr(2,rt.memory().load32(rb)-rt.memory().load32(rb+12));});
    add(0xB240A59Eu,"sceMpegRingbufferPut",[this](auto&,auto& c){
        auto& s=diva_mpeg_;auto& m=rt.memory();const auto rb=c.gpr[4],capacity=m.load32(rb),callback=m.load32(rb+24),argument=m.load32(rb+28),data=m.load32(rb+20);
        if(!capacity || !callback){c.set_gpr(2,0);return;}
        int remaining=std::max(0,std::min({static_cast<int>(c.gpr[5]),static_cast<int>(c.gpr[6]),static_cast<int>(capacity-m.load32(rb+12))}));unsigned total=0;
        while(remaining>0 && !rt.stopped()){
            const auto write=m.load32(rb+8)%capacity;const auto count=std::min<unsigned>(remaining,capacity-write);const auto destination=data+write*2048;
            ++callback_depth_;auto result=kon::run_native_callback(rt,c,callback,destination,count,argument);--callback_depth_;
            if(!result.completed)return;int added=static_cast<std::int32_t>(result.value);
            if(added<0){c.set_gpr(2,total?total:result.value);return;}if(static_cast<unsigned>(added)>count)throw std::runtime_error("Invalid MPEG ring callback count");
            const auto position=std::uint64_t(s.offset)+std::uint64_t(s.put)*2048;
            if(position+std::uint64_t(added)*2048>s.original.size())throw std::runtime_error("MPEG ring read beyond original movie");
            for(unsigned i=0;i<unsigned(added)*2048;++i)if(m.load8(destination+i)!=s.original[position+i])throw std::runtime_error("MPEG ring bytes differ from selected original movie");
            s.put+=added;total+=added;m.store32(rb+4,m.load32(rb+4)+added);m.store32(rb+8,m.load32(rb+8)+added);m.store32(rb+12,m.load32(rb+12)+added);
            if(unsigned(added)<count)break;remaining-=added;
        }c.set_gpr(2,total);
    });
    add(0xFE246728u,"sceMpegGetAvcAu",[this](auto&,auto& c){
        auto& s=diva_mpeg_;if(s.packet>=media_.movie_packets()){c.set_gpr(2,0x80618001u);return;}
        const auto packet=media_.movie_packet(s.packet);const auto end=packet.position<0?std::uint64_t(s.taken)*2048+s.offset:std::uint64_t(packet.position)+packet.bytes;
        const auto needed=std::uint32_t((end>s.offset?end-s.offset:0)+2047)/2048;
        if(needed>s.put){c.set_gpr(2,0x80618001u);return;}
        if(!s.pending){const auto consumed=std::min(s.put-s.taken,needed>s.taken?needed-s.taken:0u);if(s.ring)rt.memory().store32(s.ring+12,rt.memory().load32(s.ring+12)-consumed);s.taken+=consumed;s.pending=true;}
        diva_mpeg_au(c.gpr[6],packet.pts,packet.dts,packet.bytes);if(c.gpr[7])rt.memory().store32(c.gpr[7],1);c.set_gpr(2,0);
    });
    add(0x0E3C2E9Du,"sceMpegAvcDecode",[this](auto&,auto& c){
        auto& s=diva_mpeg_;if(!s.pending || s.packet>=media_.movie_packets()){if(c.gpr[8])rt.memory().store32(c.gpr[8],0);c.set_gpr(2,0x80618001u);return;}
        auto frame=media_.decode_movie_packet(s.packet++);s.pending=false;s.last_frame=!frame.rgba.empty();const auto width=c.gpr[6]?c.gpr[6]:s.width,destination=rt.memory().load32(c.gpr[7]);
        auto writes=diva_mpeg_frame(frame,destination,width,c.gpr[8]);complete_codec(c,0,std::move(writes));
    });
    add(0x740FCCD1u,"sceMpegAvcDecodeStop",[this](auto&,auto& c){auto frame=media_.flush_movie();auto writes=diva_mpeg_frame(frame,rt.memory().load32(c.gpr[6]),c.gpr[5]?c.gpr[5]:diva_mpeg_.width,c.gpr[7]);complete_codec(c,0,std::move(writes));});
    add(0x0F6C18D7u,"sceMpegAvcDecodeDetail",[this](auto&,auto& c){const std::uint32_t detail[]{0,diva_mpeg_.frames,480,272,0,0,0,0,diva_mpeg_.last_frame?1u:0u};for(unsigned i=0;i<9;++i)rt.memory().store32(c.gpr[5]+i*4,detail[i]);c.set_gpr(2,0);});
    add(0x4571CC64u,"sceMpegAvcDecodeFlush",[this](auto&,auto& c){diva_mpeg_.pending=false;c.set_gpr(2,0);});
    add(0x707B7629u,"sceMpegFlushAllStream",[this](auto&,auto& c){if(diva_mpeg_.ring)rt.memory().store32(diva_mpeg_.ring+12,0);diva_mpeg_.pending=false;c.set_gpr(2,0);});
    add(0xE1CE83A7u,"sceMpegGetAtracAu",[this](auto&,auto& c){
        auto& s=diva_mpeg_;if(s.audio_packet>=s.audio.size() || s.audio[s.audio_packet].required>s.put){c.set_gpr(2,0x80618001u);return;}
        const auto& unit=s.audio[s.audio_packet];s.audio_pending=true;
        if(unit.required>s.taken){rt.memory().store32(s.ring+12,rt.memory().load32(s.ring+12)-(unit.required-s.taken));s.taken=unit.required;}
        diva_mpeg_au(c.gpr[6],unit.pts,-1,unit.bytes.size());if(c.gpr[7])rt.memory().store32(c.gpr[7],0);c.set_gpr(2,0);
    });
    add(0x800C44DFu,"sceMpegAtracDecode",[this](auto&,auto& c){
        auto& s=diva_mpeg_;if(!s.audio_pending || s.audio_packet>=s.audio.size()){c.set_gpr(2,0x80618001u);return;}
        const auto pcm=media_.decode_movie_audio(s.audio[s.audio_packet++].bytes);s.audio_pending=false;
        if(pcm.size()!=4096 || !rt.memory().contains(c.gpr[6],8192))throw std::runtime_error("Unexpected PSMF decoded PCM dimensions");
        std::vector<std::uint8_t> bytes(pcm.size()*2);std::memcpy(bytes.data(),pcm.data(),bytes.size());
        if(s.audio_packet<=3 || s.audio_packet%300==0)calls.push_back("DivaMpegAudioDecoded frames="+std::to_string(s.audio_packet));
        complete_codec(c,0,{{c.gpr[6],std::move(bytes)}});
    });
}
