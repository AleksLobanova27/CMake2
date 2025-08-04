cmake_minimum_required(VERSION 3.22.0)
project(Project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(figures
    figure.cpp
    triangle.cpp
    right_triangle.cpp
    isosceles_triangle.cpp
    equilateral_triangle.cpp
    quadrilateral.cpp
    rectangle.cpp
    square.cpp
    parallelogram.cpp
    rhombus.cpp
    project.cpp
)

target_include_directories(figures PRIVATE include)

if(WIN32)
    set_target_properties(figures PROPERTIES LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE")
endif()