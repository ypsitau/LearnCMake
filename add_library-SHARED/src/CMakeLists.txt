add_library(HogeLib SHARED) # this can also be specified by set(BUILD_SHARED_LIBS TRUE)
target_sources(HogeLib PRIVATE ClassA.cpp ClassB.cpp)
target_include_directories(HogeLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
