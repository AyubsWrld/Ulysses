add_library(ulyscanner)

target_sources(
    ulyscanner 
    PRIVATE
    Private/Interface.cpp
)
target_include_directories(
    ulyscanner
    PUBLIC
    Public/
    ${CMAKE_SOURCE_DIR}/Utils
)
