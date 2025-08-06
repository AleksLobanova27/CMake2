cmake_minimum_required(VERSION 3.22.0)
project(Project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    project.cpp
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
)
set(HEADERS
    figure.h
    triangle.h
    right_triangle.h
    isosceles_triangle.h
    equilateral_triangle.h
    quadrilateral.h
    rectangle.h
    square.h
    parallelogram.h
    rhombus.h
)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
