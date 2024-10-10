add_executable(HogeTest)
target_sources(HogeTest PRIVATE main.cpp)
target_link_libraries(HogeTest PRIVATE HogeLib)
