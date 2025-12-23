cmake_minimum_required(VERSION 3.22.1)

project(retrodroid_native)

add_library(
        retrodroid_native
        SHARED
        JNI/jni_bridge.cpp
        Core/emulator_host.cpp
)

find_library(
        log-lib
        log
)

target_link_libraries(
        retrodroid_native
        ${log-lib}
)

