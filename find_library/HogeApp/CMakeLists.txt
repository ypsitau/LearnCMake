cmake_minimum_required(VERSION 3.13)

project(HogeApp CXX)

#message(${PROJECT_SOURCE_DIR}/../HogeLib/build/src/Debug)
#find_library(HogeLib REQUIRED PATHS ${PROJECT_SOURCE_DIR}/../HogeLib/build/src/Debug)

add_subdirectory(src)
