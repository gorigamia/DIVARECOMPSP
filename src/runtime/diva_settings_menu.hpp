#pragma once
#include "diva_preferences.hpp"
#include "platform/image.hpp"
#include "native_gamepads.hpp"
#include <array>
#include <sstream>
namespace kon {
// Host UI only. No game code, simulation speed or guest rendering state is patched.
class DivaSettingsMenu {
    struct Screen{RECT area,work;std::wstring name;};
    std::vector<Screen> screens_;
    struct Art{std::vector<std::uint32_t> pixels;unsigned width=0,height=0;};
    Art cover_,disc_;bool art_loaded_=false;
    int section_=0,row_=0,profile_=0,capturing_=-1;bool navigation_=false;
    std::uint32_t last_pad_=0;std::wstring notice_;
    inline static constexpr const wchar_t* sections_[]{L"Graficos",L"Som",L"Controles",L"Sistema"};
    inline static constexpr const char* profiles_[]{"keyboard","xbox","playstation","nintendo","generic"};
    inline static constexpr const wchar_t* profile_labels_[]{L"Teclado",L"Xbox / XInput",L"PlayStation / HID",L"Nintendo / HID",L"Generico / HID"};
    inline static constexpr const char* actions_[]{"circle","cross","square","triangle","l","r","start","select"};
    inline static constexpr const wchar_t* action_labels_[]{L"Circulo / confirmar",L"Cruz",L"Quadrado",L"Triangulo",L"L",L"R",L"Start",L"Select"};
    inline static constexpr const char* defaults_[5][8]={{"X","Z","A","S","Q","W","ENTER","BACKSPACE"},{"A","B","X","Y","LB","RB","MENU","VIEW"},{"CIRCLE","CROSS","SQUARE","TRIANGLE","L1","R1","OPTIONS","SHARE"},{"A","B","Y","X","L","R","PLUS","MINUS"},{"3","2","1","4","5","6","10","9"}};
    static std::wstring wide(const std::string& value){return std::wstring(value.begin(),value.end());}
    static void fill(HDC dc,RECT box,COLORREF color){auto brush=CreateSolidBrush(color);FillRect(dc,&box,brush);DeleteObject(brush);}
    static void label(HDC dc,RECT box,const std::wstring& value,int size,COLORREF color,UINT flags=DT_LEFT|DT_SINGLELINE|DT_VCENTER){
        auto font=CreateFontW(-size,0,0,0,FW_MEDIUM,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,CLEARTYPE_QUALITY,0,L"Segoe UI");
        auto previous=SelectObject(dc,font);SetTextColor(dc,color);DrawTextW(dc,value.c_str(),-1,&box,flags|DT_NOPREFIX|DT_END_ELLIPSIS);SelectObject(dc,previous);DeleteObject(font);
    }
    static BOOL CALLBACK enumerate(HMONITOR handle,HDC,LPRECT,LPARAM data){
        auto& menu=*reinterpret_cast<DivaSettingsMenu*>(data);MONITORINFOEXW info{};info.cbSize=sizeof(info);GetMonitorInfoW(handle,&info);
        DEVMODEW mode{};mode.dmSize=sizeof(mode);EnumDisplaySettingsW(info.szDevice,ENUM_CURRENT_SETTINGS,&mode);
        menu.screens_.push_back({info.rcMonitor,info.rcWork,L"Monitor "+std::to_wstring(menu.screens_.size()+1)+L"  /  "+std::to_wstring(mode.dmPelsWidth)+L" x "+std::to_wstring(mode.dmPelsHeight)+L"  /  "+std::to_wstring(mode.dmDisplayFrequency)+L" Hz"});return TRUE;
    }
    void monitors(){screens_.clear();EnumDisplayMonitors(nullptr,nullptr,enumerate,reinterpret_cast<LPARAM>(this));}
    static int cycle(int value,int change,int count){return (value+change+count)%count;}
    int rows()const{return section_==0?6:section_==1?6:section_==2?9:2;}
    std::string binding(int action)const{
        std::ifstream input(DivaPreferences::controls);std::string line,group;auto result=std::string(defaults_[profile_][action]);
        while(std::getline(input,line)){
            if(auto comment=line.find_first_of("#;");comment!=std::string::npos)line.erase(comment);
            line.erase(std::remove_if(line.begin(),line.end(),[](char ch){return ch==' ' || ch=='\t' || ch=='\r';}),line.end());
            if(!line.empty() && line.front()=='[' && line.back()==']'){group=line.substr(1,line.size()-2);continue;}
            auto eq=line.find('=');if(group==profiles_[profile_] && eq!=std::string::npos && line.substr(0,eq)==actions_[action])result=line.substr(eq+1);
        }return result;
    }
    void bind(int action,const std::string& value){
        std::ifstream input(DivaPreferences::controls);std::vector<std::string> lines;std::string line;bool in=false,inserted=false;
        while(std::getline(input,line)){
            if(!line.empty() && line.back()=='\r')line.pop_back();
            if(!line.empty() && line.front()=='['){
                if(in && !inserted){lines.push_back(std::string(actions_[action])+"="+value);inserted=true;}
                in=line==std::string("[")+profiles_[profile_]+"]";
            }
            if(in && line.starts_with(std::string(actions_[action])+"=")){if(!inserted)lines.push_back(std::string(actions_[action])+"="+value);inserted=true;continue;}
            lines.push_back(line);
        }
        if(!inserted){if(!in)lines.push_back(std::string("[")+profiles_[profile_]+"]");lines.push_back(std::string(actions_[action])+"="+value);}
        auto temporary=DivaPreferences::controls;temporary+=".tmp";std::ofstream output(temporary);
        for(auto& item:lines)output<<item<<'\n';output.close();std::error_code error;
        if(output)std::filesystem::rename(temporary,DivaPreferences::controls,error);
        notice_=output && !error?L"Mapeamento salvo. Aplicado na proxima abertura do jogo.":L"Nao foi possivel salvar o mapeamento.";
    }
    void load_art(){
        if(art_loaded_)return;art_loaded_=true;
        auto load=[](Art& art,const std::vector<std::filesystem::path>& paths){for(auto& path:paths)if(std::filesystem::is_regular_file(path))try{
            art.pixels=platform::decode_image_with_system(path,art.width,art.height);
            for(auto& pixel:art.pixels)pixel=(pixel&0xFF00FF00u)|((pixel&255u)<<16)|((pixel>>16)&255u);return;
        }catch(...){} };
        auto disc_root=DivaPreferences::root/"analysis/extracted/jp/PSP_GAME";
        load(cover_,{DivaPreferences::assets/"cover.png",disc_root/"PIC1.PNG",disc_root/"ICON0.PNG"});
        load(disc_,{DivaPreferences::assets/"umd.png"});
    }
    static void image(HDC dc,const Art& art,RECT box){
        if(art.pixels.empty())return;
        BITMAPINFO info{};info.bmiHeader.biSize=sizeof(BITMAPINFOHEADER);info.bmiHeader.biWidth=art.width;info.bmiHeader.biHeight=-LONG(art.height);info.bmiHeader.biPlanes=1;info.bmiHeader.biBitCount=32;
        SetStretchBltMode(dc,HALFTONE);SetBrushOrgEx(dc,0,0,nullptr);
        StretchDIBits(dc,box.left,box.top,box.right-box.left,box.bottom-box.top,0,0,art.width,art.height,art.pixels.data(),&info,DIB_RGB_COLORS,SRCCOPY);
    }
    static void image_fit(HDC dc,const Art& art,RECT box){
        if(art.pixels.empty())return;
        double ratio=std::min(double(box.right-box.left)/art.width,double(box.bottom-box.top)/art.height);
        int width=int(art.width*ratio),height=int(art.height*ratio);
        int x=box.left+int(box.right-box.left-width)/2,y=box.top+int(box.bottom-box.top-height)/2;
        image(dc,art,{x,y,x+width,y+height});
    }
    std::pair<std::wstring,std::wstring> entry(int index,HWND owner){
        using P=DivaPreferences;
        if(section_==0){
            switch(index){
            case 0:return {L"Modo de tela",P::fullscreen?L"Tela cheia sem bordas":L"Janela"};
            case 1:{auto n=std::min<std::size_t>(P::monitor,screens_.empty()?0:screens_.size()-1);return {L"Monitor",screens_.empty()?L"Atual":screens_[n].name};}
            case 2:return {L"Tamanho da janela",std::array<std::wstring,4>{L"960 x 544",L"1280 x 720 (16:9)",L"1600 x 900 (16:9)",L"1920 x 1080 (16:9)"}[P::window_size]};
            case 3:return {L"Proporcao da imagem",std::array<std::wstring,4>{L"Original PSP",L"16:9",L"4:3",L"Preencher a tela"}[P::aspect]};
            case 4:return {L"Escala de apresentacao",std::array<std::wstring,3>{L"Pixels nitidos",L"Suave",L"Pixels inteiros"}[P::scaling]};
            default:return {L"Contador de FPS",P::fps?L"Ligado":L"Desligado"};
            }
        }
        if(section_==1){switch(index){
            case 0:return {L"Volume geral",std::to_wstring(P::volume)+L"%"};
            case 1:return {L"Silenciar audio",P::mute?L"Ligado":L"Desligado"};
            case 2:return {L"Saida",P::mono?L"Mono":L"Estereo"};
            case 3:return {L"Balanco",P::balance==0?L"Centro":(P::balance<0?L"Esquerda ":L"Direita ")+std::to_wstring(std::abs(P::balance.load()))+L"%"};
            case 4:return {L"Silenciar em segundo plano",P::background_mute?L"Ligado":L"Desligado"};
            default:return {L"Buffer (proxima abertura)",std::to_wstring(P::buffer)+L" amostras"};
        }}
        if(section_==2){if(index==0)return {L"Perfil de mapeamento",profile_labels_[profile_]};return {action_labels_[index-1],capturing_==index-1?L"Pressione uma tecla...":wide(binding(index-1))};}
        return index==0?std::pair<std::wstring,std::wstring>{L"Janela de log",L"Mostrar / ocultar (F2)"}:std::pair<std::wstring,std::wstring>{L"Fechar configuracoes",L"Voltar ao jogo (F1)"};
    }
    void persist(){notice_=DivaPreferences::save()?L"Configuracoes salvas automaticamente.":L"Nao foi possivel salvar as configuracoes.";}
    void change(HWND owner,int direction){
        using P=DivaPreferences;
        if(section_==0){switch(row_){
            case 0:P::fullscreen=!P::fullscreen;PostMessageW(owner,WM_APP+2,P::fullscreen?1:0,0);break;
            case 1:if(!screens_.empty()){P::monitor=cycle(P::monitor,direction,static_cast<int>(screens_.size()));apply_screen(owner);}break;
            case 2:P::window_size=cycle(P::window_size,direction,4);apply_screen(owner);break;
            case 3:P::aspect=cycle(P::aspect,direction,4);break;
            case 4:P::scaling=cycle(P::scaling,direction,3);break;
            case 5:P::fps=!P::fps;break;
        }persist();}
        else if(section_==1){switch(row_){
            case 0:P::volume=std::clamp(P::volume+direction*5,0,100);break;
            case 1:P::mute=!P::mute;break;
            case 2:P::mono=!P::mono;break;
            case 3:P::balance=std::clamp(P::balance+direction*10,-100,100);break;
            case 4:P::background_mute=!P::background_mute;break;
            case 5:{const int sizes[]{256,512,1024,2048,4096};int n=0;while(n<4 && sizes[n]!=P::buffer)++n;P::buffer=sizes[cycle(n,direction,5)];break;}
        }persist();}
        else if(section_==2){
            if(!row_){profile_=cycle(profile_,direction,5);capturing_=-1;}
            else if(!profile_)capturing_=row_-1;
            else{
                const std::vector<std::vector<std::string>> options{{},{"A","B","X","Y","LB","RB","MENU","VIEW"},{"CROSS","CIRCLE","SQUARE","TRIANGLE","L1","R1","OPTIONS","SHARE"},{"A","B","X","Y","L","R","PLUS","MINUS"},{"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16"}};
                const auto& choices=options[profile_];auto current=binding(row_-1);auto found=std::find(choices.begin(),choices.end(),current);int n=found==choices.end()?0:int(found-choices.begin());bind(row_-1,choices[cycle(n,direction,int(choices.size()))]);
            }
        }else if(row_==0)NativeLogWindow::toggle_active();else toggle(owner);
        InvalidateRect(owner,nullptr,FALSE);
    }
public:
    void apply_screen(HWND owner){
        monitors();if(screens_.empty())return;
        auto index=std::min<int>(DivaPreferences::monitor,int(screens_.size())-1);DivaPreferences::monitor=index;
        const auto& screen=screens_[index];
        if(DivaPreferences::fullscreen){const auto& r=screen.area;SetWindowPos(owner,nullptr,r.left,r.top,r.right-r.left,r.bottom-r.top,SWP_NOZORDER|SWP_NOACTIVATE);}
        else{const std::array<SIZE,4> sizes{{{960,544},{1280,720},{1600,900},{1920,1080}}};auto size=sizes[DivaPreferences::window_size];
            RECT rect{0,0,size.cx,size.cy};AdjustWindowRect(&rect,WS_OVERLAPPEDWINDOW,FALSE);
            int w=std::min<LONG>(rect.right-rect.left,screen.work.right-screen.work.left),h=std::min<LONG>(rect.bottom-rect.top,screen.work.bottom-screen.work.top);
            SetWindowPos(owner,nullptr,screen.work.left+(screen.work.right-screen.work.left-w)/2,screen.work.top+(screen.work.bottom-screen.work.top-h)/2,w,h,SWP_NOZORDER|SWP_NOACTIVATE);}
    }
    void toggle(HWND owner){DivaPreferences::menu_open=!DivaPreferences::menu_open;capturing_=-1;monitors();InvalidateRect(owner,nullptr,FALSE);}
    bool key(HWND owner,unsigned key){
        if(!DivaPreferences::menu_open)return false;
        if(capturing_>=0){if(key==VK_ESCAPE){capturing_=-1;}else{auto name=ButtonMap::key_label(key);if(ButtonMap::key_code(name)){bind(capturing_,name);capturing_=-1;}}InvalidateRect(owner,nullptr,FALSE);return true;}
        if(key==VK_ESCAPE){toggle(owner);return true;}
        if(key==VK_TAB){navigation_=!navigation_;}
        else if(key==VK_PRIOR || key==VK_NEXT){section_=cycle(section_,key==VK_PRIOR?-1:1,4);row_=0;}
        else if(key==VK_UP || key==VK_DOWN){int step=key==VK_UP?-1:1;if(navigation_){section_=cycle(section_,step,4);row_=0;}else row_=cycle(row_,step,rows());}
        else if(key==VK_LEFT || key==VK_RIGHT || key==VK_RETURN){if(navigation_)navigation_=false;else change(owner,key==VK_LEFT?-1:1);}
        InvalidateRect(owner,nullptr,FALSE);return true;
    }
    void poll_pad(HWND owner){
        auto buttons=GamepadHub::instance().read().buttons;auto edge=buttons&~last_pad_;last_pad_=buttons;
        if((buttons&9)==9 && (edge&9)){toggle(owner);return;}
        if(!DivaPreferences::menu_open || GetForegroundWindow()!=owner)return;
        if(edge&0x100){section_=cycle(section_,-1,4);row_=0;}
        if(edge&0x200){section_=cycle(section_,1,4);row_=0;}
        if(edge&0x10)key(owner,VK_UP);if(edge&0x40)key(owner,VK_DOWN);if(edge&0x80)key(owner,VK_LEFT);if(edge&0x20)key(owner,VK_RIGHT);
        if(edge&0x2000)key(owner,VK_RETURN);if(edge&0x4000)key(owner,VK_ESCAPE);InvalidateRect(owner,nullptr,FALSE);
    }
    bool click(HWND owner,int x,int y){
        if(!DivaPreferences::menu_open)return false;RECT area{};GetClientRect(owner,&area);double scale=std::min(area.right/1280.0,area.bottom/720.0);
        if(scale<=0)return true;x=int((x-(area.right-1280*scale)/2)/scale);y=int((y-(area.bottom-720*scale)/2)/scale);
        if(x>=22 && x<=194 && y>=150 && y<150+4*76){section_=(y-150)/76;row_=0;navigation_=false;capturing_=-1;}
        else if(x>=222 && x<=934 && y>=142 && y<142+rows()*49){row_=(y-142)/49;navigation_=false;change(owner,x<720?-1:1);}
        else if(x>=1150 && y<87)toggle(owner);
        InvalidateRect(owner,nullptr,FALSE);return true;
    }
    void draw(HDC dc,int width,int height,HWND owner){
        load_art();auto saved=SaveDC(dc);fill(dc,{0,0,width,height},RGB(7,13,20));
        const double scale=std::min(width/1280.0,height/720.0);SetMapMode(dc,MM_ANISOTROPIC);SetWindowExtEx(dc,1280,720,nullptr);
        SetViewportExtEx(dc,int(1280*scale),int(720*scale),nullptr);SetViewportOrgEx(dc,int((width-1280*scale)/2),int((height-720*scale)/2),nullptr);
        SetBkMode(dc,TRANSPARENT);fill(dc,{0,0,1280,5},RGB(57,222,201));
        fill(dc,{0,90,208,660},RGB(13,24,33));fill(dc,{952,107,1258,635},RGB(13,25,34));
        label(dc,{27,24,650,65},L"Project DIVA  /  CONFIGURACOES",29,RGB(232,249,248));
        label(dc,{1150,22,1245,72},L"F1  /  X",20,RGB(57,222,201));
        label(dc,{26,108,195,141},L"SECOES",13,RGB(129,153,164));
        for(int n=0;n<4;++n){RECT r{22,150+n*76,194,214+n*76};if(n==section_){
            fill(dc,{18,r.top-3,198,r.bottom+3},RGB(15,70,69));fill(dc,r,RGB(24,57,63));fill(dc,{22,r.top,26,r.bottom},RGB(57,240,218));
            auto glow=CreateSolidBrush(RGB(57,222,201));FrameRect(dc,&r,glow);DeleteObject(glow);}
            label(dc,{39,r.top,188,r.bottom},sections_[n],22,n==section_?RGB(85,255,229):RGB(146,171,183));}
        label(dc,{225,101,930,133},sections_[section_],23,RGB(57,222,201));
        for(int n=0;n<rows();++n){auto [name,value]=entry(n,owner);RECT r{222,142+n*49,934,186+n*49};
            fill(dc,r,n==row_ && !navigation_?RGB(28,52,63):RGB(16,29,40));
            if(n==row_ && !navigation_)fill(dc,{222,r.top,225,r.bottom},RGB(239,76,166));
            label(dc,{236,r.top,590,r.bottom},name,17,RGB(206,224,231));label(dc,{590,r.top,915,r.bottom},value,17,RGB(95,241,219),DT_RIGHT|DT_SINGLELINE|DT_VCENTER);}
        std::wstring detail=section_==0?L"CPU / 480 x 272 nativos. Escala de saida nao altera a resolucao interna.":section_==1?L"Volume e balanco atuam na saida; a velocidade da musica permanece original.":section_==2?L"Xbox, PlayStation, Nintendo e HID genericos / conexao durante o jogo.":L"F2 controla o log; F3 alterna o contador de FPS.";
        label(dc,{225,599,930,638},detail,14,RGB(147,171,184),DT_LEFT|DT_WORDBREAK);
        // Photographs of the real PSP case and UMD, including its plastic shell.
        // Preserve both source images: no invented CD silhouette or center cutout.
        label(dc,{978,112,1240,136},L"HATSUNE MIKU / PSP",13,RGB(57,222,201),DT_CENTER|DT_SINGLELINE|DT_VCENTER);
        image_fit(dc,cover_,{978,142,1240,420});
        label(dc,{978,422,1240,443},L"UNIVERSAL MEDIA DISC",12,RGB(146,170,180),DT_CENTER|DT_SINGLELINE|DT_VCENTER);
        image_fit(dc,disc_,{978,449,1240,605});
        if(disc_.pixels.empty())label(dc,{978,449,1240,605},L"Imagem do UMD indisponivel",14,RGB(146,170,180),DT_CENTER|DT_SINGLELINE|DT_VCENTER);
        label(dc,{978,608,1240,630},L"Project DIVA / ULJM05472",12,RGB(146,170,180),DT_CENTER|DT_SINGLELINE|DT_VCENTER);
        fill(dc,{0,658,1280,720},RGB(12,25,34));label(dc,{25,668,1250,689},notice_.empty()?L"Tab: secoes  |  Setas: navegar e ajustar  |  Enter: selecionar  |  Controle: L/R troca secoes":notice_,15,RGB(85,231,211));
        label(dc,{25,692,1250,716},L"F1 / Esc: voltar   |   Start + Select: menu   |   Jogo e audio pausados enquanto o menu esta aberto.",13,RGB(146,166,178));
        RestoreDC(dc,saved);
    }
};
}
