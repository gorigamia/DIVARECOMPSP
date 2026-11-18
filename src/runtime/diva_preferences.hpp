#pragma once
#include "native_port_settings.hpp"
#include <atomic>
#include <algorithm>
#include <mutex>
namespace kon {
struct DivaPreferences {
    inline static std::atomic<bool> menu_open{false},focused{true};
    inline static std::atomic<int> volume{100},balance{0},aspect{0},scaling{0},window_size{0},monitor{0},buffer{1024};
    inline static std::atomic<bool> mute{false},mono{false},background_mute{false},fps{true},fullscreen{false};
    inline static std::filesystem::path root,file,controls,assets;
    inline static std::mutex writing;
    static void configure(const std::filesystem::path& content,const std::filesystem::path& settings){
        root=content;file=settings.empty()?content/"config/settings.ini":std::filesystem::absolute(settings);
        controls=file.parent_path()/"controls.ini";assets=file.parent_path().parent_path()/"assets/ui";
        auto read=[&](const char* key,int fallback,int low,int high){try{auto value=read_port_setting(file,key);return value?std::clamp(std::stoi(*value),low,high):fallback;}catch(...){return fallback;}};
        volume=read("ui_volume",100,0,100);balance=read("ui_balance",0,-100,100);
        aspect=read("ui_aspect",0,0,3);scaling=read("ui_scaling",0,0,2);window_size=read("ui_window_size",0,0,3);monitor=read("ui_monitor",0,0,32);
        mute=read("ui_mute",0,0,1);mono=read("ui_mono",0,0,1);background_mute=read("ui_background_mute",0,0,1);
        fps=read("ui_fps",1,0,1);fullscreen=read("ui_fullscreen",0,0,1);buffer=read("ui_audio_frames",1024,256,4096);
    }
    static bool save(){
        std::lock_guard lock(writing);bool ok=true;
        for(const auto& pair:std::initializer_list<std::pair<const char*,int>>{
            {"ui_volume",volume},{"ui_balance",balance},{"ui_aspect",aspect},{"ui_scaling",scaling},{"ui_window_size",window_size},{"ui_monitor",monitor},
            {"ui_mute",mute},{"ui_mono",mono},{"ui_background_mute",background_mute},{"ui_fps",fps},{"ui_fullscreen",fullscreen},{"ui_audio_frames",buffer}})
            ok=write_port_setting(file,pair.first,std::to_string(pair.second)) && ok;
        return ok;
    }
};
}
