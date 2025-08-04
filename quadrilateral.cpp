#include "quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d,
    double angle_A, double angle_B, double angle_C, double angle_D,
    const std::string& name)
    : Figure(name), a(a), b(b), c(c), d(d),
    angle_A(angle_A), angle_B(angle_B), angle_C(angle_C), angle_D(angle_D) {
}

Quadrilateral Quadrilateral::create(double a, double b, double c, double d,
    double angle_A, double angle_B, double angle_C, double angle_D) {
    return Quadrilateral(a, b, c, d, angle_A, angle_B, angle_C, angle_D, "Четырёхугольник");
}

void Quadrilateral::print_info() const {
    std::cout << get_name() << ":\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << angle_A << " B=" << angle_B << " C=" << angle_C << " D=" << angle_D << "\n\n";
}