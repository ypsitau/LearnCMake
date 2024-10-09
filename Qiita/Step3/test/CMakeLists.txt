add_executable(a.out)
target_sources(a.out PRIVATE main.cpp)
target_link_libraries(a.out greetings)
