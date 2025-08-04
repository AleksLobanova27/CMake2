#include "right_triangle.h"

RightTriangle::RightTriangle(double a, double b, double c,
    double angle_A, double angle_B)
    : Triangle(a, b, c, angle_A, angle_B, 90, "Прямоугольный треугольник") {
}