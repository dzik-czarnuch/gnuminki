cmake_minimum_required(VERSION 3.8)
project(gnuminki)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(main main.cpp)
target_link_libraries(main ${CURSES_LIBRARIES})

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)
