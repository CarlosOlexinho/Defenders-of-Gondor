cmake_minimum_required(VERSION 3.15)
project(RTS)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)

add_subdirectory(src/main)