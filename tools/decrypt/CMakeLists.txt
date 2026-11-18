cmake_minimum_required(VERSION 3.20)
project(DivaExecutablePreparation LANGUAGES C CXX)
# Standalone GPL-3.0-or-later preparation utility; not linked into the runtime.
set(DECRYPT_SOURCE "${CMAKE_CURRENT_LIST_DIR}/../../third_party/eboot_decrypt")
add_library(kirk STATIC
    ${DECRYPT_SOURCE}/libkirk/AES.c
    ${DECRYPT_SOURCE}/libkirk/SHA1.c
    ${DECRYPT_SOURCE}/libkirk/bn.c
    ${DECRYPT_SOURCE}/libkirk/ec.c
    ${DECRYPT_SOURCE}/libkirk/kirk_engine.c
    ${DECRYPT_SOURCE}/libkirk/amctrl.c)
add_executable(eboot_decrypt
    ${DECRYPT_SOURCE}/eboot_decrypt.cpp
    ${DECRYPT_SOURCE}/PrxDecrypter.cpp)
target_compile_features(eboot_decrypt PRIVATE cxx_std_17)
target_include_directories(eboot_decrypt PRIVATE ${DECRYPT_SOURCE}/shim ${DECRYPT_SOURCE})
target_link_libraries(eboot_decrypt PRIVATE kirk)
if(MSVC)
    target_compile_definitions(kirk PRIVATE _CRT_SECURE_NO_WARNINGS)
    target_compile_definitions(eboot_decrypt PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()
