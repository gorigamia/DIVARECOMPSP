cmake_minimum_required(VERSION 3.20)
project(ProjectDivaRecompiled LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_executable(diva_launcher WIN32 src/launcher.cpp)
target_compile_options(diva_launcher PRIVATE -O2 -g0)
target_link_options(diva_launcher PRIVATE -municode)
target_link_libraries(diva_launcher PRIVATE user32 gdi32 comdlg32 shell32)
set(FRAMEWORK "${CMAKE_SOURCE_DIR}/third_party/kon_base/third_party/PSPRecomp")
add_library(psprecomp_core STATIC IMPORTED)
set_target_properties(psprecomp_core PROPERTIES
    IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/build/framework-llvm/libpsprecomp_core.a"
    INTERFACE_INCLUDE_DIRECTORIES "${FRAMEWORK}/include")
add_executable(diva_codegen "${FRAMEWORK}/tools/codegen_main.cpp" src/framework/program_analysis.cpp)
target_link_libraries(diva_codegen PRIVATE psprecomp_core)
add_executable(diva_analyze "${FRAMEWORK}/tools/analyzer_main.cpp" src/framework/program_analysis.cpp)
target_link_libraries(diva_analyze PRIVATE psprecomp_core)
file(GLOB DIVA_GENERATED CONFIGURE_DEPENDS "generated/japan/generated_*.cpp")
if(NOT DIVA_GENERATED)
    message(FATAL_ERROR "Generate the Japanese corpus first")
endif()
add_library(diva_guest STATIC ${DIVA_GENERATED})
target_link_libraries(diva_guest PUBLIC psprecomp_core)
set(DIVA_GUEST_OPTIMIZATION "0" CACHE STRING "Diagnostic AOT optimization level")
target_compile_options(diva_guest PRIVATE "-O${DIVA_GUEST_OPTIMIZATION}" -g0)
add_executable(diva_boot
    src/runtime/boot_probe.cpp
    src/runtime/native_controls.cpp
    src/runtime/native_network.cpp
    src/runtime/native_adhoc.cpp
    src/runtime/native_online.cpp
    src/runtime/host_headphones.cpp
    src/runtime/native_media.cpp)
target_include_directories(diva_boot PRIVATE src/runtime third_party/ffmpeg/include)
target_compile_options(diva_boot PRIVATE -O1 -g0 -msse4.1)
target_compile_definitions(diva_boot PRIVATE _WIN32_WINNT=0x0A00 WINVER=0x0A00)
target_link_options(diva_boot PRIVATE "-Wl,--stack,67108864")
target_link_libraries(diva_boot PRIVATE diva_guest
    user32 gdi32 winmm iphlpapi ole32 dbghelp hid ws2_32 comdlg32
    shell32 bcrypt winhttp windowscodecs)
add_executable(diva_draw_replay EXCLUDE_FROM_ALL src/runtime/replay_native_draw.cpp)
target_compile_definitions(diva_draw_replay PRIVATE _WIN32_WINNT=0x0A00 WINVER=0x0A00)
target_compile_options(diva_draw_replay PRIVATE -O1 -g0)
target_link_libraries(diva_draw_replay PRIVATE psprecomp_core user32 gdi32 hid)
add_executable(diva_media_verify EXCLUDE_FROM_ALL src/media_verify.cpp src/runtime/native_media.cpp)
target_include_directories(diva_media_verify PRIVATE src/runtime third_party/ffmpeg/include)
target_compile_options(diva_media_verify PRIVATE -O2 -g0)
add_executable(diva_savedata_verify EXCLUDE_FROM_ALL src/runtime/native_savedata_test.cpp)
target_link_libraries(diva_savedata_verify PRIVATE psprecomp_core)
add_executable(diva_service_verify EXCLUDE_FROM_ALL src/service_verify.cpp
    src/runtime/native_controls.cpp src/runtime/native_network.cpp src/runtime/native_adhoc.cpp
    src/runtime/native_online.cpp src/runtime/host_headphones.cpp src/runtime/native_media.cpp)
target_include_directories(diva_service_verify PRIVATE src/runtime third_party/ffmpeg/include)
target_compile_options(diva_service_verify PRIVATE -O1 -g0 -msse4.1)
target_compile_definitions(diva_service_verify PRIVATE _WIN32_WINNT=0x0A00 WINVER=0x0A00)
target_link_libraries(diva_service_verify PRIVATE psprecomp_core user32 gdi32 winmm iphlpapi ole32 dbghelp hid ws2_32 comdlg32 shell32 bcrypt winhttp windowscodecs)
