#pragma once
#include <windows.h>
#include <atomic>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <algorithm>
namespace kon {
// Independent UI thread: closing the log hides it; it never closes the game.
class NativeLogWindow {
public:
    explicit NativeLogWindow(std::filesystem::path file,bool visible):file_(std::move(file)),visible_(visible){
        worker_=std::thread([this]{run();});
    }
    ~NativeLogWindow(){
        stopping_=true;
        if(const auto window=window_.load())PostMessageW(window,WM_APP+2,0,0);
        if(worker_.joinable())worker_.join();
    }
    NativeLogWindow(const NativeLogWindow&)=delete;
    static void toggle_active(){if(const auto window=active_.load())PostMessageW(window,WM_APP+1,0,0);}
private:
    inline static std::atomic<HWND> active_{nullptr};
    std::atomic<HWND> window_{nullptr};std::atomic<bool> stopping_{false};
    std::filesystem::path file_;bool visible_;std::thread worker_;HWND edit_=nullptr;HFONT font_=nullptr;
    std::streamoff last_size_=-1;
    void refresh(){
        std::ifstream input(file_,std::ios::binary|std::ios::ate);if(!input)return;
        const auto size=static_cast<std::streamoff>(input.tellg());if(size<0 || size==last_size_)return;last_size_=size;
        constexpr std::streamoff limit=128*1024;
        const auto start=std::max(std::streamoff{0},size-limit);input.seekg(start);
        std::string text(static_cast<std::size_t>(size-start),'\0');input.read(text.data(),text.size());
        if(start){const auto line=text.find('\n');if(line!=std::string::npos)text.erase(0,line+1);}
        std::string windows;windows.reserve(text.size()+1024);
        for(const auto ch:text){if(ch=='\n')windows+='\r';windows+=ch;}
        const auto count=MultiByteToWideChar(CP_UTF8,0,windows.data(),static_cast<int>(windows.size()),nullptr,0);
        std::wstring wide(count,L'\0');MultiByteToWideChar(CP_UTF8,0,windows.data(),static_cast<int>(windows.size()),wide.data(),count);
        DWORD from=0,to=0;SendMessageW(edit_,EM_GETSEL,reinterpret_cast<WPARAM>(&from),reinterpret_cast<LPARAM>(&to));
        const auto old_length=GetWindowTextLengthW(edit_);const bool follow=to==static_cast<DWORD>(old_length);
        const auto scroll=SendMessageW(edit_,EM_GETFIRSTVISIBLELINE,0,0);
        SetWindowTextW(edit_,wide.c_str());
        if(follow){SendMessageW(edit_,EM_SETSEL,wide.size(),wide.size());SendMessageW(edit_,EM_SCROLLCARET,0,0);}
        else{SendMessageW(edit_,EM_SETSEL,from,to);SendMessageW(edit_,EM_LINESCROLL,0,scroll-SendMessageW(edit_,EM_GETFIRSTVISIBLELINE,0,0));}
    }
    static LRESULT CALLBACK procedure(HWND window,UINT message,WPARAM w,LPARAM l){
        auto* self=reinterpret_cast<NativeLogWindow*>(GetWindowLongPtrW(window,GWLP_USERDATA));
        if(message==WM_NCCREATE){self=static_cast<NativeLogWindow*>(reinterpret_cast<CREATESTRUCTW*>(l)->lpCreateParams);SetWindowLongPtrW(window,GWLP_USERDATA,reinterpret_cast<LONG_PTR>(self));}
        if(self){
            if(message==WM_SIZE){if(self->edit_)MoveWindow(self->edit_,0,0,LOWORD(l),HIWORD(l),TRUE);return 0;}
            if(message==WM_TIMER){self->refresh();return 0;}
            if(message==WM_CLOSE){ShowWindow(window,SW_HIDE);return 0;}
            if(message==WM_APP+1){ShowWindow(window,IsWindowVisible(window)?SW_HIDE:SW_SHOWNOACTIVATE);return 0;}
            if(message==WM_APP+2){DestroyWindow(window);return 0;}
            if(message==WM_DESTROY){KillTimer(window,1);PostQuitMessage(0);return 0;}
        }
        return DefWindowProcW(window,message,w,l);
    }
    void run(){
        WNDCLASSW wc{};wc.lpfnWndProc=procedure;wc.hInstance=GetModuleHandleW(nullptr);wc.lpszClassName=L"ProjectDivaNativeLog";wc.hCursor=LoadCursorW(nullptr,MAKEINTRESOURCEW(32512));
        RegisterClassW(&wc);
        const auto window=CreateWindowExW(0,wc.lpszClassName,L"Project DIVA - Log (F2 mostra/oculta)",WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,800,460,nullptr,nullptr,wc.hInstance,this);
        if(!window)return;
        edit_=CreateWindowExW(WS_EX_CLIENTEDGE,L"EDIT",L"Aguardando log...",WS_CHILD|WS_VISIBLE|WS_VSCROLL|WS_HSCROLL|ES_MULTILINE|ES_READONLY|ES_AUTOVSCROLL|ES_AUTOHSCROLL,0,0,780,420,window,nullptr,wc.hInstance,nullptr);
        SendMessageW(edit_,EM_SETLIMITTEXT,250000,0);
        font_=CreateFontW(-14,0,0,0,FW_NORMAL,FALSE,FALSE,FALSE,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,FIXED_PITCH,L"Consolas");
        SendMessageW(edit_,WM_SETFONT,reinterpret_cast<WPARAM>(font_),TRUE);
        RECT client{};GetClientRect(window,&client);MoveWindow(edit_,0,0,client.right,client.bottom,TRUE);
        window_=window;active_=window;SetTimer(window,1,300,nullptr);refresh();
        if(visible_)ShowWindow(window,SW_SHOWNOACTIVATE);
        if(stopping_)PostMessageW(window,WM_APP+2,0,0);
        MSG message{};while(GetMessageW(&message,nullptr,0,0)>0){TranslateMessage(&message);DispatchMessageW(&message);}
        active_=nullptr;window_=nullptr;if(font_)DeleteObject(font_);
    }
};
}
