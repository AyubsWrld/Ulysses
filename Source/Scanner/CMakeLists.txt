add_library(ulyscanner)

target_sources(
    ulyscanner 
    PRIVATE
    Private/Interface.cpp
    # Private/data_reply.cpp
    # Private/data_unique.cpp
    # Private/data_request.cpp
)
target_include_directories(
    ulyscanner
    PUBLIC
    Public/
    ${CMAKE_SOURCE_DIR}/Utils
)
