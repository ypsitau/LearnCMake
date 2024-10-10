set(BUILD_SHARED_LIBS TRUE)

add_library(HogeLib)
target_sources(HogeLib PRIVATE ClassA.cpp ClassB.cpp)
target_include_directories(HogeLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
