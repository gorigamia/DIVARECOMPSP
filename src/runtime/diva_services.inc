// DIVA-specific service additions. NIDs resolved from the supplied PPSSPP map.
rt.register_hle("ThreadManForUser",0xEDBA5844u,[this](auto&,auto& c){
    const auto id=c.gpr[4];if(!callbacks_.erase(id)){c.set_gpr(2,0x800201A1u);return;}
    for(auto& slot:power_slots_)if(slot==id)slot=0;std::erase(memory_callbacks_,id);if(umd_callback_uid_==id)umd_callback_uid_=0;if(exit_callback_uid_==id)exit_callback_uid_=0;c.set_gpr(2,0);
});
rt.register_hle("ThreadManForUser",0xF8170FBEu,[this](auto&,auto& c){
    const auto id=c.gpr[4];if(!mutexes_.objects.erase(id)){c.set_gpr(2,0x800201C3u);return;}
    for(auto& [uid,thread]:threads)if(thread.wait==WaitKind::Mutex && thread.wait_id==id)wake(thread,0x800201B5u);c.set_gpr(2,0);maybe_preempt(c);
});
rt.register_hle("ThreadManForUser",0x30FD48F0u,[this](auto&,auto& c){
    if(c.gpr[7] && !rt.memory().contains(c.gpr[7],4)){c.set_gpr(2,0x80000103u);return;}
    const auto result=signals_.acquire_event(c.gpr[4],c.gpr[5],c.gpr[6]);
    if(!result.error && c.gpr[7])rt.memory().store32(c.gpr[7],result.pattern);c.set_gpr(2,result.error?result.error:result.blocked?0x800201AFu:0);
});
for(const auto nid:{0x616403BAu,0x383F7BCCu})rt.register_hle("ThreadManForUser",nid,[this,nid](auto&,auto& c){
    const auto id=c.gpr[4],current=static_cast<std::uint32_t>(psprecomp::runtime_thread_uid());
    if(!id || id==current){c.set_gpr(2,0x80020197u);return;}auto found=threads.find(id);if(found==threads.end()){c.set_gpr(2,0x80020198u);return;}
    auto& thread=found->second;if(!thread.started || thread.finished){if(nid==0x383F7BCCu)delete_worker(c);else c.set_gpr(2,0x800201A2u);return;}
    const auto lw=thread.wait==WaitKind::LwMutex?thread.wait_id:0;
    thread.finished=true;thread.ready=false;thread.suspended=false;thread.exit_status=0x800201ACu;thread.wait=WaitKind::None;thread.wait_callbacks=false;thread.callback_paused=false;thread.deadline=0;thread.timeout_pointer=0;
    codec_writes_.erase(id);net_waits_.erase(id);if(lw)update_lw_waiters(lw);wake_waiters(WaitKind::ThreadEnd,id);
    calls.push_back("DivaTerminateThread uid="+std::to_string(id));c.set_gpr(2,0);if(nid==0x383F7BCCu)delete_worker(c);else maybe_preempt(c);
});
for(const auto nid:{0x75156E8Fu,0x9944F31Fu})rt.register_hle("ThreadManForUser",nid,[this,nid](auto&,auto& c){
    const auto current=static_cast<std::uint32_t>(psprecomp::runtime_thread_uid()),id=c.gpr[4]?c.gpr[4]:current;auto found=threads.find(id);
    if(found==threads.end()){c.set_gpr(2,0x80020198u);return;}auto& thread=found->second;
    if(!thread.started || thread.finished){c.set_gpr(2,0x800201A2u);return;}const bool suspend=nid==0x9944F31Fu;
    if(thread.suspended==suspend){c.set_gpr(2,suspend?0x800201A3u:0x800201A5u);return;}
    if(suspend && id==current && callback_depth_){c.set_gpr(2,0x800201A7u);return;}
    thread.suspended=suspend;c.set_gpr(2,0);
    if(suspend && id==current){thread.context=c;thread.context.pc=c.gpr[31];thread.ready=true;thread.order=++order_;dispatch_next(c);}else maybe_preempt(c);
});
rt.register_hle("ThreadManForUser",0x809CE29Bu,[this](auto&,auto& c){
    if(callback_depth_){rt.stop("ExitDeleteThread inside isolated callback");return;}
    const auto id=static_cast<std::uint32_t>(psprecomp::runtime_thread_uid());auto found=threads.find(id);if(found==threads.end()){c.set_gpr(2,0x80020198u);return;}
    account_running();auto& thread=found->second;thread.exit_status=c.gpr[4];thread.finished=true;thread.ready=false;thread.wait=WaitKind::None;thread.deadline=0;
    codec_writes_.erase(id);net_waits_.erase(id);wake_waiters(WaitKind::ThreadEnd,id);c.set_gpr(4,id);delete_worker(c,true);
});
rt.register_hle("ThreadManForUser",0xEF9E4C70u,[this](auto&,auto& c){
    const auto id=c.gpr[4];if(!signals_.events.erase(id)){c.set_gpr(2,0x8002019Au);return;}
    unsigned released=0;for(auto& [uid,thread]:threads)if(thread.wait==WaitKind::Event && thread.wait_id==id){wake(thread,0x800201B5u);++released;}
    calls.push_back("DivaDeleteEventFlag uid="+std::to_string(id)+" released_waiters="+std::to_string(released));c.set_gpr(2,0);maybe_preempt(c);
});
rt.register_hle("ThreadManForUser",0xA66B0120u,[this](auto&,auto& c){
    auto found=signals_.events.find(c.gpr[4]);if(found==signals_.events.end()){c.set_gpr(2,0x8002019Au);return;}
    auto& memory=rt.memory();const auto pointer=c.gpr[5];if(!memory.contains(pointer,4)){c.set_gpr(2,0x80000103u);return;}
    const auto size=std::min(memory.load32(pointer),52u);if(size<4 || !memory.contains(pointer,size)){c.set_gpr(2,0x80000104u);return;}
    std::array<std::uint8_t,52> info{};auto word=[&](unsigned offset,std::uint32_t value){for(unsigned i=0;i<4;++i)info[offset+i]=value>>(i*8);};
    word(0,52);const auto& event=found->second;for(unsigned i=0;i<event.name.size() && i<31;++i)info[4+i]=event.name[i];
    word(36,event.attributes);word(40,event.initial);word(44,event.pattern);unsigned waiting=0;for(const auto& [uid,thread]:threads)waiting+=thread.wait==WaitKind::Event && thread.wait_id==c.gpr[4];word(48,waiting);
    for(unsigned i=0;i<size;++i)memory.store8(pointer+i,info[i]);c.set_gpr(2,0);
});
rt.register_hle("sceRtc",0x011F03C1u,[this](auto&,auto& c){
    const auto tick=clock_.system_microseconds();c.set_gpr(2,static_cast<std::uint32_t>(tick));c.set_gpr(3,static_cast<std::uint32_t>(tick>>32));
});
rt.register_hle("sceRtc",0xE7C27D1Bu,[this](auto&,auto& c){
    if(!rt.memory().contains(c.gpr[4],16)){c.set_gpr(2,0x80000103u);return;}
    const auto date=kon::HostClock::calendar_date(kon::utc_to_local_tick(clock_.rtc_tick()));
    for(unsigned i=0;i<6;++i)rt.memory().store16(c.gpr[4]+i*2,static_cast<std::uint16_t>(date[i]));
    rt.memory().store32(c.gpr[4]+12,date[6]);c.set_gpr(2,0);
});
rt.register_hle("sceRtc",0xE1C93E47u,[this](auto&,auto& c){
    if(!rt.memory().contains(c.gpr[4],16)||!rt.memory().contains(c.gpr[5],8)){c.set_gpr(2,0x80000103u);return;}
    const auto p=c.gpr[4];const std::chrono::year_month_day date{std::chrono::year{rt.memory().load16(p)},std::chrono::month{rt.memory().load16(p+2)},std::chrono::day{rt.memory().load16(p+4)}};
    const auto h=rt.memory().load16(p+6),m=rt.memory().load16(p+8),s=rt.memory().load16(p+10);
    if(!date.ok()||h>23||m>59||s>59){c.set_gpr(2,0x80250001u);return;}
    const auto seconds=std::chrono::duration_cast<std::chrono::seconds>(std::chrono::sys_days{date}.time_since_epoch()).count()+h*3600+m*60+s;
    const auto bits=static_cast<std::uint64_t>(seconds);rt.memory().store32(c.gpr[5],static_cast<std::uint32_t>(bits));rt.memory().store32(c.gpr[5]+4,static_cast<std::uint32_t>(bits>>32));c.set_gpr(2,0);
});
rt.register_hle("IoFileMgrForUser",0xA0B5A7C2u,[this](auto&,auto& c){
    const auto id=c.gpr[4],dest=c.gpr[5],size=c.gpr[6];
    if(!files_.files.contains(id)){c.set_gpr(2,kon::NativeFiles::bad_fd);return;}
    if(diva_async_results_.contains(id)){c.set_gpr(2,0x80010010u);return;}
    if(!rt.memory().contains(dest,size)){c.set_gpr(2,0x80000103u);return;}
    std::vector<std::uint8_t> bytes(size);const auto count=files_.read(id,bytes);
    if(!(count&0x80000000u) && count)rt.memory().copy_in(dest,std::span<const std::uint8_t>(bytes.data(),count));
    diva_async_results_[id]=static_cast<std::int32_t>(count);c.set_gpr(2,0);
    calls.push_back("DivaIoReadAsync fd="+std::to_string(id)+" requested="+std::to_string(size)+" result="+std::to_string(static_cast<std::int32_t>(count)));
});
rt.register_hle("IoFileMgrForUser",0x71B19E77u,[this](auto&,auto& c){
    const auto id=c.gpr[4];if(!files_.files.contains(id)){c.set_gpr(2,kon::NativeFiles::bad_fd);return;}
    if(diva_async_results_.contains(id)){c.set_gpr(2,0x80010010u);return;}
    const auto offset=std::bit_cast<std::int64_t>(std::uint64_t(c.gpr[6])|(std::uint64_t(c.gpr[7])<<32));
    diva_async_results_[id]=files_.seek(id,offset,c.gpr[8]);c.set_gpr(2,0);
});
for(const auto nid:{0x3251EA56u,0xE23EEC33u,0x35DBD746u})rt.register_hle("IoFileMgrForUser",nid,[this,nid](auto&,auto& c){
    if(nid==0x35DBD746u && !dispatch_callbacks(c))return;
    const auto result=diva_async_results_.find(c.gpr[4]);
    if(result==diva_async_results_.end()){c.set_gpr(2,files_.files.contains(c.gpr[4])?0x80020329u:kon::NativeFiles::bad_fd);return;}
    if(!rt.memory().contains(c.gpr[5],8)){c.set_gpr(2,0x80000103u);return;}
    const auto bits=static_cast<std::uint64_t>(result->second);rt.memory().store32(c.gpr[5],static_cast<std::uint32_t>(bits));rt.memory().store32(c.gpr[5]+4,static_cast<std::uint32_t>(bits>>32));
    diva_async_results_.erase(result);c.set_gpr(2,0);
});
rt.register_hle("IoFileMgrForUser",0xB293727Fu,[this](auto&,auto& c){
    if(c.gpr[4]!=0xFFFFFFFFu && !files_.files.contains(c.gpr[4])){c.set_gpr(2,kon::NativeFiles::bad_fd);return;}
    if(c.gpr[5]!=0xFFFFFFFFu && (c.gpr[5]<8 || c.gpr[5]>119)){c.set_gpr(2,0x80020193u);return;}
    // Host reads complete during submission, so there is no queued worker to reprioritize.
    c.set_gpr(2,0);
});
rt.register_hle("InterruptManager",0xCA04A2B9u,[this](auto&,auto& c){
    if(c.gpr[4]!=30u || c.gpr[5]>=16u || (c.gpr[6]&3u) || !rt.memory().contains(c.gpr[6],4)){rt.stop("DIVA unsupported subinterrupt registration");return;}
    const auto key=(c.gpr[4]<<16)|c.gpr[5];
    if(diva_subinterrupts_.contains(key)){c.set_gpr(2,0x80020067u);return;}
    diva_subinterrupts_.emplace(key,DivaSubInterrupt{c.gpr[6],c.gpr[7],false});
    calls.push_back("DivaRegisterVblank address="+psprecomp::hex32(c.gpr[6]));c.set_gpr(2,0);
});
rt.register_hle("InterruptManager",0xFB8E22ECu,[this](auto&,auto& c){
    const auto found=diva_subinterrupts_.find((c.gpr[4]<<16)|c.gpr[5]);if(found==diva_subinterrupts_.end()){c.set_gpr(2,0x80020068u);return;}
    found->second.enabled=true;diva_last_vblank_=display_.frame_count(clock_.system_microseconds());c.set_gpr(2,0);
});
rt.register_hle("InterruptManager",0xD61E6961u,[this](auto&,auto& c){c.set_gpr(2,diva_subinterrupts_.erase((c.gpr[4]<<16)|c.gpr[5])?0u:0x80020068u);});
rt.register_hle("ThreadManForUser",0x293B45B8u,[](auto&,auto& c){c.set_gpr(2,static_cast<std::uint32_t>(psprecomp::runtime_thread_uid()));});
rt.register_hle("ThreadManForUser",0x8125221Du,[this](auto&,auto& c){
    if(c.gpr[5]&~0x500u){c.set_gpr(2,0x80020191u);return;}
    if(c.gpr[6]){rt.stop("DIVA mailbox options require implementation");return;}
    const auto uid=next_uid_++;diva_mailboxes_.emplace(uid,DivaMailbox{c.gpr[5],{}});
    calls.push_back("DivaCreateMbx uid="+std::to_string(uid)+" name="+guest_name(c.gpr[4]));c.set_gpr(2,uid);
});
rt.register_hle("ThreadManForUser",0x86255ADAu,[this](auto&,auto& c){c.set_gpr(2,diva_mailboxes_.erase(c.gpr[4])?0u:0x8002019Bu);});
rt.register_hle("ThreadManForUser",0xE9B3061Eu,[this](auto&,auto& c){
    const auto found=diva_mailboxes_.find(c.gpr[4]);if(found==diva_mailboxes_.end()){c.set_gpr(2,0x8002019Bu);return;}
    const auto message=c.gpr[5];if((message&3u)||!rt.memory().contains(message,8)){c.set_gpr(2,0x80000103u);return;}
    auto& box=found->second;auto& q=box.messages;
    if(std::find(q.begin(),q.end(),message)!=q.end()){rt.stop("DIVA mailbox duplicate message");return;}
    auto pos=q.end();if(box.attributes&0x400u)pos=std::find_if(q.begin(),q.end(),[&](auto old){return rt.memory().load8(message+4)<rt.memory().load8(old+4);});
    q.insert(pos,message);for(std::size_t i=0;i<q.size();++i)rt.memory().store32(q[i],q[(i+1)%q.size()]);c.set_gpr(2,0);
});
rt.register_hle("ThreadManForUser",0x0D81716Au,[this](auto&,auto& c){
    const auto found=diva_mailboxes_.find(c.gpr[4]);if(found==diva_mailboxes_.end()){c.set_gpr(2,0x8002019Bu);return;}
    if(!rt.memory().contains(c.gpr[5],4)){c.set_gpr(2,0x80000103u);return;}
    auto& q=found->second.messages;if(q.empty()){c.set_gpr(2,0x800201B2u);return;}
    const auto message=q.front();q.pop_front();if(!q.empty())rt.memory().store32(q.back(),q.front());
    rt.memory().store32(c.gpr[5],message);c.set_gpr(2,0);
});
rt.register_hle("IoFileMgrForUser",0x55F4717Du,[this](auto&,auto& c){
    const auto path=guest_name(c.gpr[4]);const auto result=files_.change_directory(path);
    calls.push_back("DivaIoChdir path="+path+" result="+psprecomp::hex32(result));c.set_gpr(2,result);
});
rt.nids().add("SysMemUserForUser",0x91DE343Cu,"sceKernelSetCompiledSdkVersion500_505");
rt.register_hle("SysMemUserForUser",0x91DE343Cu,[this](auto&,auto& c){
    sdk=c.gpr[4];calls.push_back("DivaSdk="+psprecomp::hex32(sdk));c.set_gpr(2,0);
});
for(const auto [nid,fd]:std::array<std::pair<std::uint32_t,std::uint32_t>,3>{{
    {0x172D316Eu,0u},{0xA6BAB2E9u,1u},{0xF78BA90Au,2u}}})
    rt.register_hle("StdioForUser",nid,[fd](auto&,auto& c){c.set_gpr(2,fd);});
rt.register_hle("UtilsForUser",0x79D1C3FAu,[this](auto&,auto& c){rt.memory().memory_barrier();c.set_gpr(2,0);});
rt.register_hle("UtilsForUser",0x91E4F6A7u,[this](auto&,auto& c){c.set_gpr(2,static_cast<std::uint32_t>(clock_.system_microseconds()));});
rt.register_hle("UtilsForUser",0x27CC57F0u,[this](auto&,auto& c){
    const auto seconds=static_cast<std::uint32_t>((clock_.rtc_tick()-kon::HostClock::unix_epoch_tick)/1000000u);
    if(c.gpr[4]){if(!rt.memory().contains(c.gpr[4],4)){c.set_gpr(2,0x80000103u);return;}rt.memory().store32(c.gpr[4],seconds);}c.set_gpr(2,seconds);
});
rt.register_hle("UtilsForUser",0x71EC4271u,[this](auto&,auto& c){
    const auto us=clock_.rtc_tick()-kon::HostClock::unix_epoch_tick;
    if(c.gpr[4]){if(!rt.memory().contains(c.gpr[4],8)){c.set_gpr(2,0x80000103u);return;}
        rt.memory().store32(c.gpr[4],static_cast<std::uint32_t>(us/1000000u));rt.memory().store32(c.gpr[4]+4,static_cast<std::uint32_t>(us%1000000u));}
    if(c.gpr[5]){if(!rt.memory().contains(c.gpr[5],8)){c.set_gpr(2,0x80000103u);return;}
        TIME_ZONE_INFORMATION tz{};const auto kind=GetTimeZoneInformation(&tz);const auto bias=tz.Bias+(kind==TIME_ZONE_ID_DAYLIGHT?tz.DaylightBias:tz.StandardBias);
        rt.memory().store32(c.gpr[5],bias);rt.memory().store32(c.gpr[5]+4,kind==TIME_ZONE_ID_DAYLIGHT?1:0);}
    c.set_gpr(2,0);
});
rt.register_hle("sceDisplay",0x9C6EAAD7u,[this](auto&,auto& c){c.set_gpr(2,static_cast<std::uint32_t>(display_.frame_count(clock_.system_microseconds())));});
rt.register_hle("sceDmac",0x617F3FE6u,[this](auto&,auto& c){
    const auto dest=c.gpr[4],source=c.gpr[5],size=c.gpr[6];
    if(!rt.memory().contains(dest,size)||!rt.memory().contains(source,size)){c.set_gpr(2,0x80000103u);return;}
    std::vector<std::uint8_t> bytes(size);rt.memory().copy_out(source,bytes);rt.memory().copy_in(dest,bytes);c.set_gpr(2,0);
});
rt.register_hle("sceSuspendForUser",0x090CCB3Fu,[](auto&,auto& c){SetThreadExecutionState(ES_SYSTEM_REQUIRED|ES_DISPLAY_REQUIRED);c.set_gpr(2,0);});
rt.register_hle("sceSuspendForUser",0x3E0271D3u,[this](auto&,auto& c){
    if(c.gpr[4]){c.set_gpr(2,0x80000107u);return;}
    if(diva_volatile_locked_){c.set_gpr(2,0x802B0200u);return;}
    if((c.gpr[5]&&!rt.memory().contains(c.gpr[5],4))||(c.gpr[6]&&!rt.memory().contains(c.gpr[6],4))){c.set_gpr(2,0x80000103u);return;}
    diva_volatile_locked_=true;if(c.gpr[5])rt.memory().store32(c.gpr[5],0x08400000u);if(c.gpr[6])rt.memory().store32(c.gpr[6],0x00400000u);c.set_gpr(2,0);
});
rt.register_hle("sceSuspendForUser",0xA569E425u,[this](auto&,auto& c){
    if(c.gpr[4]){c.set_gpr(2,0x80000107u);return;}if(!diva_volatile_locked_){c.set_gpr(2,0x802B0200u);return;}diva_volatile_locked_=false;c.set_gpr(2,0);
});
rt.register_hle("LoadExecForUser",0x05572A5Fu,[this](auto&,auto&){rt.stop("DIVA requested ExitGame");});
rt.register_hle("sceUtility",0xA5DA2406u,[this](auto&,auto& c){
    if(!rt.memory().contains(c.gpr[5],4)){c.set_gpr(2,0x80000103u);return;}
    std::uint32_t value=0;
    switch(c.gpr[4]){
    case 1: value=0;break; // automatic ad-hoc channel
    case 2: value=1;break; // WLAN power-save preference
    case 3: value=0;break; // YYYY/MM/DD
    case 4: value=1;break; // 24-hour clock
    case 5: {TIME_ZONE_INFORMATION zone{};GetTimeZoneInformation(&zone);value=static_cast<std::uint32_t>(-zone.Bias);break;}
    case 6: {TIME_ZONE_INFORMATION zone{};value=GetTimeZoneInformation(&zone)==TIME_ZONE_ID_DAYLIGHT;break;}
    case 7: value=system_language_;break;
    case 9: value=confirm_button_;break;
    default: c.set_gpr(2,0x80110103u);return;
    }
    rt.memory().store32(c.gpr[5],value);c.set_gpr(2,0);
    calls.push_back("DivaSystemParam id="+std::to_string(c.gpr[4])+" value="+std::to_string(value));
});
rt.register_hle("sceUtility",0x34B78343u,[this](auto&,auto& c){
    if(c.gpr[4]!=1u){c.set_gpr(2,0x80110103u);return;}
    constexpr std::string_view nickname="Player";
    if(c.gpr[6]<=nickname.size() || !rt.memory().contains(c.gpr[5],c.gpr[6])){c.set_gpr(2,0x80110104u);return;}
    for(unsigned i=0;i<=nickname.size();++i)rt.memory().store8(c.gpr[5]+i,i<nickname.size()?nickname[i]:0);c.set_gpr(2,0);
});
rt.register_hle("scePower",0xEBD177D6u,[this](auto&,auto& c){
    const auto pll=c.gpr[4],cpu=c.gpr[5],bus=c.gpr[6];
    if(pll<19 || pll>333 || cpu<1 || cpu>333 || bus<1 || bus>166 || cpu>pll || bus*2>pll){c.set_gpr(2,0x80000107u);return;}
    calls.push_back("DivaClockRequest pll="+std::to_string(pll)+" cpu="+std::to_string(cpu)+" bus="+std::to_string(bus)+" (native host clock)");c.set_gpr(2,0);
});

