#include "triangle.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c,
    double angle_A, double angle_B, double angle_C,
    const std::string& name)
    : Figure(name), a(a), b(b), c(c),
    angle_A(angle_A), angle_B(angle_B), angle_C(angle_C) {
}

Triangle Triangle::create(double a, double b, double c,
    double angle_A, double angle_B, double angle_C) {
    return Triangle(a, b, c, angle_A, angle_B, angle_C, "Треугольник");
}

void Triangle::print_info() const {
    std::cout << get_name() << ":\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << angle_A << " B=" << angle_B << " C=" << angle_C << "\n\n";
}