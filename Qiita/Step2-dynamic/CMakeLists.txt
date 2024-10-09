cmake_minimum_required(VERSION 3.13)

project(test_cmake CXX)

set(BUILD_SHARED_LIBS TRUE)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)	# creates import library

add_library(greetings)
target_sources(greetings PRIVATE hello.cpp good_morning.cpp)

add_executable(a.out)
target_sources(a.out PRIVATE main.cpp)
target_link_libraries(a.out greetings)
