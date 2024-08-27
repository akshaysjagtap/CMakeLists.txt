cmake_minimum_required(VERSION 3.13)  

project(simple_example)              

add_subdirectory(add)

add_executable(simple_example main.cpp)

target_link_libraries(simple_example PUBLIC add)

target_include_directories(simple_example PUBLIC ${PROJECT_SOURCE_DIR}/add)
