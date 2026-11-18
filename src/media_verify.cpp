#include "native_media.hpp"
#include <iostream>
int main(int argc,char** argv){
    try{
        auto root=argc>1?std::filesystem::path(argv[1]):std::filesystem::current_path();
        kon::NativeMedia media(root);media.load_module(0x300);media.load_module(0x302);media.load_module(0x303);media.initialize_video();
        std::cout<<"FFmpeg="<<media.version()<<'\n';
        media.open_movie(root/"analysis/extracted/jp/PSP_GAME/USRDIR/media/movie/Opening.pmf");
        std::uint64_t frames=0,nonblack=0;
        auto check=[&](const kon::MovieFrame& frame){if(frame.rgba.empty())return;if(frame.width!=480 || frame.height!=272)throw std::runtime_error("Unexpected original movie dimensions");++frames;for(auto pixel:frame.rgba)nonblack+=(pixel&0xFFFFFFu)!=0;};
        for(std::size_t i=0;i<media.movie_packets();++i)check(media.decode_movie_packet(i));
        for(;;){auto frame=media.flush_movie();if(frame.rgba.empty())break;check(frame);}
        std::cout<<"packets="<<media.movie_packets()<<" decoded_frames="<<frames<<" nonblack_pixels="<<nonblack<<'\n';
        if(frames<2500 || !nonblack)throw std::runtime_error("Incomplete movie decode");return 0;
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
