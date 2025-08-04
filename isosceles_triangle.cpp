#include "isosceles_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b,
    double angle_A, double angle_B)
    : Triangle(a, b, a, angle_A, angle_B, angle_A, "Равнобедренный треугольник") {
}