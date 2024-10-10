cmake_minimum_required(VERSION 3.13)

project(HogeApp CXX)

find_library(HogeLib REQUIRED PATHS C:/Users/ypsit/source/LearnCMake/find_library/HogeLib)

add_subdirectory(src)
