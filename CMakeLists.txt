cmake_minimum_required(VERSION 3.16)
project(
    Ulysses
    VERSION 1.0
    LANGUAGES C CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

add_subdirectory(Source/Scanner)
add_executable(ulysses Source/main.cpp)

target_link_libraries(
    ulysses
    PRIVATE
    ulyscanner
    pcap
)
