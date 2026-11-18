// Direct tests of production HLE handlers and their scheduler transitions.
#define KON_SERVICE_FIXTURE
#include "runtime/boot_probe.cpp"
static void check(bool yes,const char* reason){if(!yes)throw std::runtime_error(reason);}
int main(int argc,char** argv){try{
    const auto root=std::filesystem::absolute(argc>1?argv[1]:".");kon::ContentMount content(root,"ja");psprecomp::Runtime runtime;
    const auto image=psprecomp::Elf32Image::from_file(root/"local/japan/EBOOT.ELF");image.load_and_relocate(runtime.memory());const auto module=image.find_module_info(runtime.memory());check(module.has_value(),"Missing DIVA module");
    kon::DivaPreferences::configure(root,root/"local/tests/service-settings.ini");
    BootstrapServices services(runtime,module->gp,0x08D00000u,image,content,false,root/"local/tests/services-storage");services.install();auto& cpu=runtime.cpu();auto& memory=runtime.memory();
    constexpr std::uint32_t name=0x09FE0000,info=0x09FE0100,pattern=0x09FE0200;
    for(unsigned n=0;n<8;++n)memory.store8(name+n,"fixture"[n]);
    auto call=[&](std::uint32_t nid,std::uint32_t a=0,std::uint32_t b=0,std::uint32_t c=0,std::uint32_t d=0){cpu.gpr[4]=a;cpu.gpr[5]=b;cpu.gpr[6]=c;cpu.gpr[7]=d;runtime.invoke_import("ThreadManForUser",nid,cpu);check(!runtime.stopped(),runtime.stop_reason().c_str());return cpu.gpr[2];};
    auto create=[&](unsigned priority){cpu.gpr[8]=0;cpu.gpr[9]=0;auto id=call(0x446D8DE6u,name,0x08804000u,priority,0x4000u);check(services.threads.contains(id),"CreateThread failed");auto& thread=services.threads.at(id);thread.started=true;thread.ready=true;thread.context.pc=thread.entry;thread.context.gpr[31]=0x08804004u;thread.context.gpr[16]=id;return id;};
    auto first=create(16),second=create(24);
    auto select=[&](unsigned id){services.mark_running(id);cpu=services.threads.at(id).context;psprecomp::set_runtime_thread_identity(id,"service fixture");};
    select(second);check(call(0x9944F31Fu,first)==0 && services.threads.at(first).suspended,"Suspend did not retain thread");
    check(call(0x9944F31Fu,first)==0x800201A3u,"Duplicate suspension accepted");
    call(0x75156E8Fu,first);check(!services.threads.at(first).suspended && psprecomp::runtime_thread_uid()==int(first),"Resume failed to make higher-priority task runnable");
    select(first);auto event=call(0x55C20A00u,name,0x200u,5);check(event<0x80000000u,"Event creation failed");
    check(call(0x1FB15A32u,event,8)==0,"Event signal failed");memory.store32(info,52);
    check(call(0xA66B0120u,event,info)==0 && memory.load32(info+40)==5 && memory.load32(info+44)==13,"Event status lost initial/current patterns");
    check(call(0x30FD48F0u,event,16,0,pattern)==0x800201AFu && memory.load32(pattern)==13,"Event poll condition mismatch");
    auto& waiter=services.threads.at(second);waiter.ready=false;waiter.wait=WaitKind::Event;waiter.wait_id=event;
    check(call(0xEF9E4C70u,event)==0 && waiter.ready && waiter.wait==WaitKind::None && waiter.context.gpr[2]==0x800201B5u,"Deleting event did not release waiting task");
    check(call(0xEF9E4C70u,event)==0x8002019Au,"Deleted event remained valid");
    auto mutex=call(0xB7D098C6u,name,0,0);check(mutex<0x80000000u,"Mutex creation failed");
    waiter.ready=false;waiter.wait=WaitKind::Mutex;waiter.wait_id=mutex;
    check(call(0xF8170FBEu,mutex)==0 && waiter.context.gpr[2]==0x800201B5u,"Deleting mutex did not release waiting task");
    check(call(0x616403BAu,second)==0 && services.threads.at(second).finished,"Thread termination did not finish its owner");
    check(call(0x383F7BCCu,second)==0 && !services.threads.contains(second),"TerminateDelete failed on dormant task");
    auto exiting=create(24);services.threads.at(first).ready=true;select(exiting);call(0x809CE29Bu,123);
    check(!services.threads.contains(exiting) && psprecomp::runtime_thread_uid()==int(first) && cpu.gpr[16]==first,"ExitDelete did not free stack and resume remaining task");
    std::cout<<"PASS: production event status/poll/delete, mutex deletion, thread suspend/resume/terminate/delete and self exit-delete\n";return 0;
}catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}}
