#include <iostream>
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

void print_info(const Figure& figure) {
    figure.print_info();
}

int main() {
    setlocale(LC_ALL,"Russian");
    Triangle triangle = Triangle::create(10, 20, 30, 50, 60, 70);
    print_info(triangle);

    RightTriangle right_triangle(10, 20, 30, 50, 60);
    print_info(right_triangle);

    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    print_info(isosceles_triangle);

    EquilateralTriangle equilateral_triangle(30);
    print_info(equilateral_triangle);

    Quadrilateral quadrilateral = Quadrilateral::create(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(quadrilateral);

    Rectangle rectangle(10, 20);
    print_info(rectangle);

    Square square(20);
    print_info(square);

    Parallelogram parallelogram(20, 30, 30, 40);
    print_info(parallelogram);

    Rhombus rhombus(30, 30, 40);
    print_info(rhombus);

    return 0;
}