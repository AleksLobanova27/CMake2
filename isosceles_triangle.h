#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#include "triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b,
        double angle_A, double angle_B);
};

#endif // ISOSCELES_TRIANGLE_H