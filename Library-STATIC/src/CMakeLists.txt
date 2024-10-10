add_library(HogeLib STATIC)
target_sources(HogeLib PRIVATE ClassA.cpp ClassB.cpp)
target_include_directories(HogeLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
