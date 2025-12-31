cmake_minimum_required(VERSION 3.22.1)

project(retrodroid_native)


include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Libretro
)

add_library(
        retrodroid_native
        SHARED
        ../JNI/jni_bridge.cpp
        Core/EmulatorHost.cpp
)

find_library(
        log-lib
        log
)

target_link_libraries(
        retrodroid_native
        ${log-lib}
)

