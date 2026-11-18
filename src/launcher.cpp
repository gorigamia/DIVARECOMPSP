#define UNICODE
#define _UNICODE
#define NOMINMAX
#include <windows.h>
#include <commdlg.h>
#include <shellapi.h>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <string>
#include <thread>
#include <algorithm>
#include <stdexcept>
#include <functional>

namespace fs = std::filesystem;
namespace {
constexpr UINT update_message=WM_APP+10, done_message=WM_APP+11;
HWND window;
fs::path root, selected;
std::mutex state_mutex;
std::wstring status=L"Preparando Project DIVA...", failure;
int progress=0;
bool show_log=true;
unsigned diagnostic_ms=0;
std::thread worker;
HFONT title_font, body_font, label_font;
std::wstring wide(const std::string& text){
    const int count=MultiByteToWideChar(CP_UTF8,0,text.data(),static_cast<int>(text.size()),nullptr,0);
    std::wstring result(count,L'\0');
    MultiByteToWideChar(CP_UTF8,0,text.data(),static_cast<int>(text.size()),result.data(),count);
    return result;
}
std::wstring quote(const std::wstring& value){
    // Windows command-line quoting, including a trailing backslash.
    std::wstring result=L"\"";unsigned slashes=0;
    for(wchar_t ch:value){
        if(ch==L'\\'){++slashes;continue;}
        result.append(slashes*(ch==L'"'?2:1),L'\\');slashes=0;
        if(ch==L'"')result+=L'\\';result+=ch;
    }
    result.append(slashes*2,L'\\');return result+L'"';
}
void update(int value,std::wstring message){
    {std::lock_guard lock(state_mutex);progress=std::clamp(value,0,100);status=std::move(message);}
    PostMessageW(window,update_message,0,0);
}
void text(HDC dc,HFONT font,COLORREF color,RECT area,const std::wstring& value,UINT flags=DT_LEFT|DT_SINGLELINE|DT_VCENTER){
    SelectObject(dc,font);SetTextColor(dc,color);DrawTextW(dc,value.c_str(),-1,&area,flags);
}
void paint(HWND target){
    PAINTSTRUCT ps{};HDC actual=BeginPaint(target,&ps);RECT area{};GetClientRect(target,&area);
    HDC dc=CreateCompatibleDC(actual);HBITMAP bitmap=CreateCompatibleBitmap(actual,area.right,area.bottom);
    auto old=SelectObject(dc,bitmap);SetBkMode(dc,TRANSPARENT);
    auto fill=[&](RECT box,COLORREF color){auto brush=CreateSolidBrush(color);FillRect(dc,&box,brush);DeleteObject(brush);};
    fill(area,RGB(10,18,25));fill({0,0,area.right,5},RGB(57,222,201));
    // Subtle circuit lines and a magenta accent, drawn locally without game assets.
    auto pen=CreatePen(PS_SOLID,1,RGB(24,61,66));auto old_pen=SelectObject(dc,pen);
    for(int y=42;y<area.bottom;y+=38){MoveToEx(dc,0,y,nullptr);LineTo(dc,area.right,y);}
    SelectObject(dc,old_pen);DeleteObject(pen);
    text(dc,label_font,RGB(57,222,201),{38,27,620,54},L"HATSUNE MIKU / PSP RECOMPILED");
    text(dc,title_font,RGB(239,248,248),{36,60,640,118},L"Project DIVA");
    fill({38,125,106,129},RGB(238,71,159));
    int value;std::wstring message;
    {std::lock_guard lock(state_mutex);value=progress;message=status;}
    text(dc,body_font,RGB(203,226,228),{38,147,638,202},message,DT_LEFT|DT_WORDBREAK|DT_END_ELLIPSIS);
    RECT bar{38,224,638,244};fill(bar,RGB(25,49,56));
    fill({40,226,40+596*value/100,242},RGB(57,222,201));
    if(value>0)fill({38+596*value/100,226,40+596*value/100,242},RGB(196,255,247));
    text(dc,label_font,RGB(57,222,201),{38,252,638,278},std::to_wstring(value)+L"%",DT_RIGHT|DT_SINGLELINE);
    text(dc,label_font,RGB(143,169,177),{38,288,638,319},L"Preparando os dados da ISO selecionada");
    BitBlt(actual,0,0,area.right,area.bottom,dc,0,0,SRCCOPY);
    SelectObject(dc,old);DeleteObject(bitmap);DeleteDC(dc);EndPaint(target,&ps);
}
void prepare_and_launch(){
    try{
        SECURITY_ATTRIBUTES security{sizeof(security),nullptr,TRUE};HANDLE read_pipe=nullptr,write_pipe=nullptr;
        if(!CreatePipe(&read_pipe,&write_pipe,&security,0))throw std::runtime_error("Nao foi possivel iniciar o preparador.");
        SetHandleInformation(read_pipe,HANDLE_FLAG_INHERIT,0);
        HANDLE null_input=CreateFileW(L"NUL",GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE,&security,OPEN_EXISTING,0,nullptr);
        STARTUPINFOW startup{};startup.cb=sizeof(startup);startup.dwFlags=STARTF_USESTDHANDLES;
        startup.hStdOutput=write_pipe;startup.hStdError=write_pipe;startup.hStdInput=null_input;
        PROCESS_INFORMATION child{};
        std::wstring command=L"py -3.9 -u "+quote((root/L"tools/prepare_launch.py").wstring())+L" "+quote(selected.wstring());
        BOOL started=CreateProcessW(nullptr,command.data(),nullptr,nullptr,TRUE,CREATE_NO_WINDOW,nullptr,root.c_str(),&startup,&child);
        CloseHandle(write_pipe);if(null_input!=INVALID_HANDLE_VALUE)CloseHandle(null_input);
        if(!started){CloseHandle(read_pipe);throw std::runtime_error("Python 3.9 nao foi encontrado. Instale as dependencias do projeto para preparar a ISO.");}
        fs::create_directories(root/L"local");
        std::ofstream log(root/L"local/launcher.log",std::ios::binary);
        std::string pending,error;fs::path prepared;char buffer[4096];DWORD received;
        auto consume=[&](std::string line){
            if(!line.empty() && line.back()=='\r')line.pop_back();
            if(line.starts_with("PROGRESS|")){
                auto separator=line.find('|',9);if(separator!=std::string::npos){
                    try{update(std::stoi(line.substr(9,separator-9)),wide(line.substr(separator+1)));}catch(...){}
                }
            }else if(line.starts_with("READY|"))prepared=fs::path(wide(line.substr(6)));
            else if(line.starts_with("ERROR|"))error=line.substr(6);
        };
        while(ReadFile(read_pipe,buffer,sizeof(buffer),&received,nullptr) && received){
            log.write(buffer,received);log.flush();pending.append(buffer,received);
            std::size_t end;
            while((end=pending.find('\n'))!=std::string::npos){consume(pending.substr(0,end));pending.erase(0,end+1);}
        }
        if(!pending.empty())consume(pending);
        CloseHandle(read_pipe);WaitForSingleObject(child.hProcess,INFINITE);DWORD code=1;
        GetExitCodeProcess(child.hProcess,&code);CloseHandle(child.hThread);CloseHandle(child.hProcess);
        if(code || prepared.empty())throw std::runtime_error(error.empty()?"Falha ao preparar a ISO. Consulte local/launcher.log.":error);
        fs::create_directories(prepared/L"config");
        fs::copy_file(root/L"config/controls.ini",prepared/L"config/controls.ini",fs::copy_options::overwrite_existing);
        if(!show_log)SetEnvironmentVariableW(L"DIVA_HIDE_LOG",L"1");
        else SetEnvironmentVariableW(L"DIVA_HIDE_LOG",nullptr);
        std::wstring game=quote((root/L"build/diva/diva_boot.exe").wstring())+L" --root "+quote(prepared.wstring())+
            L" --settings-file "+quote((root/L"config/settings.ini").wstring())+
            L" --language ja --window --cpu-renderer";
        if(diagnostic_ms)game+=L" --max-runtime-ms "+std::to_wstring(diagnostic_ms);
        STARTUPINFOW game_start{};game_start.cb=sizeof(game_start);PROCESS_INFORMATION game_process{};
        if(!CreateProcessW(nullptr,game.data(),nullptr,nullptr,FALSE,CREATE_NO_WINDOW,nullptr,root.c_str(),&game_start,&game_process))
            throw std::runtime_error("Nao foi possivel abrir o executavel do jogo.");
        // Completion is posted only after a real game process has started.
        PostMessageW(window,done_message,0,0);
        WaitForSingleObject(game_process.hProcess,INFINITE);
        DWORD game_code=0;GetExitCodeProcess(game_process.hProcess,&game_code);
        CloseHandle(game_process.hThread);CloseHandle(game_process.hProcess);
        if(game_code==1)MessageBoxW(nullptr,L"O jogo encontrou um erro ao iniciar. Consulte ultimo_fallo.txt e o log desta sessao.",L"Project DIVA",MB_OK|MB_ICONERROR);
    }catch(const std::exception& error){
        {std::lock_guard lock(state_mutex);failure=wide(error.what());}
        PostMessageW(window,done_message,1,0);
    }
}
LRESULT CALLBACK procedure(HWND target,UINT message,WPARAM w,LPARAM l){
    if(message==WM_PAINT){paint(target);return 0;}
    if(message==WM_ERASEBKGND)return 1;
    if(message==update_message){InvalidateRect(target,nullptr,FALSE);return 0;}
    if(message==WM_CLOSE){MessageBoxW(target,L"Aguarde a preparacao terminar. Nenhum arquivo da ISO original e alterado.",L"Project DIVA",MB_OK|MB_ICONINFORMATION);return 0;}
    if(message==done_message){
        if(w){std::wstring error;{std::lock_guard lock(state_mutex);error=failure;}MessageBoxW(target,error.c_str(),L"Nao foi possivel iniciar Project DIVA",MB_OK|MB_ICONERROR);}
        DestroyWindow(target);return 0;
    }
    if(message==WM_DESTROY){PostQuitMessage(0);return 0;}
    return DefWindowProcW(target,message,w,l);
}
}
int WINAPI wWinMain(HINSTANCE instance,HINSTANCE,LPWSTR,int){
    SetProcessDPIAware();
    wchar_t module[32768]{};GetModuleFileNameW(nullptr,module,32768);
    root=fs::path(module).parent_path().parent_path().parent_path();
    int count;auto args=CommandLineToArgvW(GetCommandLineW(),&count);
    for(int i=1;i<count;++i){
        if(std::wstring(args[i])==L"--no-log")show_log=false;
        else if(std::wstring(args[i])==L"--diagnostic-ms" && i+1<count)diagnostic_ms=std::min(900000ul,wcstoul(args[++i],nullptr,10));
    }
    LocalFree(args);
    // Keep one launcher/game session per installation; no competing extraction.
    auto name=L"Local\\ProjectDivaLauncher-"+std::to_wstring(std::hash<std::wstring>{}(root.wstring()));
    HANDLE singleton=CreateMutexW(nullptr,TRUE,name.c_str());
    if(GetLastError()==ERROR_ALREADY_EXISTS){MessageBoxW(nullptr,L"Project DIVA ja esta aberto nesta pasta.",L"Project DIVA",MB_OK);if(singleton)CloseHandle(singleton);return 0;}
    wchar_t file[32768]{};
    OPENFILENAMEW picker{};picker.lStructSize=sizeof(picker);picker.lpstrFile=file;picker.nMaxFile=32768;
    picker.lpstrTitle=L"Selecione a ISO de Hatsune Miku: Project DIVA (PSP)";
    picker.lpstrFilter=L"Imagem de disco PSP (*.iso)\0*.iso\0\0";
    picker.Flags=OFN_FILEMUSTEXIST|OFN_PATHMUSTEXIST|OFN_NOCHANGEDIR|OFN_EXPLORER;
    if(!GetOpenFileNameW(&picker)){if(singleton)CloseHandle(singleton);return 0;}
    selected=file;
    WNDCLASSW wc{};wc.hInstance=instance;wc.lpszClassName=L"ProjectDivaLoading";wc.lpfnWndProc=procedure;
    wc.hCursor=LoadCursorW(nullptr,MAKEINTRESOURCEW(32512));RegisterClassW(&wc);
    title_font=CreateFontW(-43,0,0,0,FW_SEMIBOLD,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,CLEARTYPE_QUALITY,0,L"Segoe UI");
    body_font=CreateFontW(-18,0,0,0,FW_NORMAL,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,CLEARTYPE_QUALITY,0,L"Segoe UI");
    label_font=CreateFontW(-13,0,0,0,FW_MEDIUM,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,CLEARTYPE_QUALITY,0,L"Segoe UI");
    RECT dimensions{0,0,676,338};DWORD style=WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_MINIMIZEBOX;
    AdjustWindowRect(&dimensions,style,FALSE);
    window=CreateWindowExW(0,wc.lpszClassName,L"Project DIVA - Carregando",style,
        (GetSystemMetrics(SM_CXSCREEN)-676)/2,(GetSystemMetrics(SM_CYSCREEN)-338)/2,
        dimensions.right-dimensions.left,dimensions.bottom-dimensions.top,nullptr,nullptr,instance,nullptr);
    if(!window){if(singleton)CloseHandle(singleton);return 1;}
    ShowWindow(window,SW_SHOW);UpdateWindow(window);worker=std::thread(prepare_and_launch);
    MSG message{};while(GetMessageW(&message,nullptr,0,0)>0){TranslateMessage(&message);DispatchMessageW(&message);}
    if(worker.joinable())worker.join();
    DeleteObject(title_font);DeleteObject(body_font);DeleteObject(label_font);if(singleton)CloseHandle(singleton);
    return failure.empty()?0:1;
}
