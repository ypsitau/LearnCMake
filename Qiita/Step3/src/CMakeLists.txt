set(BUILD_SHARED_LIBS TRUE)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)	# creates import library

add_library(greetings)
target_sources(greetings PRIVATE hello.cpp good_morning.cpp)
target_include_directories(greetings PUBLIC ${PROJECT_SOURCE_DIR}/include)
