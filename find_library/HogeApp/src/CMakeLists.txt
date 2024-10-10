add_executable(HogeApp)
add_library(HogeLib INTERFACE)
target_sources(HogeApp PRIVATE main.cpp)
target_link_libraries(HogeApp PRIVATE HogeLib)
