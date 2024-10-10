add_library(HogeLib INTERFACE)
target_sources(HogeLib PUBLIC ClassA.cpp ClassB.cpp) # must be PUBLIC so the user can refer to these sources
target_include_directories(HogeLib INTERFACE ${PROJECT_SOURCE_DIR}/include)
