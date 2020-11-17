cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 11)

project(logger)

add_subdirectory(readerwriterqueue)

add_library(logger
    cputime.hpp
    cputime.cpp
    mutex.hpp
    logger.hpp
    logger.cpp
)

target_include_directories(logger PUBLIC
    ./
    readerwriterqueue
)
target_link_libraries(logger readerwriterqueue)

add_executable(simple_log_test
    simple_log_test.cpp
)

target_link_libraries(simple_log_test logger)



