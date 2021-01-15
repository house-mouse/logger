cmake_minimum_required(VERSION 3.11)

if (NOT TARGET logger)
set(CMAKE_CXX_STANDARD 11)

project(logger)

add_subdirectory(readerwriterqueue)

add_library(logger
    cputime.h
    cputime.c
    cputime.hpp
    cputime.cpp
    mutex.hpp
    logger.hpp
    logger.cpp
    zzlog.c
    zzlog.h
)

target_include_directories(logger PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR} 
)
target_link_libraries(logger readerwriterqueue)

add_executable(simple_log_test EXCLUDE_FROM_ALL 
    simple_log_test.cpp
)

target_link_libraries(simple_log_test logger)

endif (NOT TARGET logger)
