cmake_minimum_required(VERSION 3.16)
project(yaml_drum_sequencer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(yaml-cpp REQUIRED)

add_executable(main src/main.cpp)

target_link_libraries(main yaml-cpp)
