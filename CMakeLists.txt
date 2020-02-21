cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(splat VERSION 2.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(${PROJECT_SOURCE_DIR}/include/splat_config.h.in splat_config.h)
add_executable(splat src/test.cpp)
target_include_directories(splat PUBLIC "${PROJECT_BINARY_DIR}")



# unsorted things
#add_subdirectory(src)
#target_link_libraries(splat bla)