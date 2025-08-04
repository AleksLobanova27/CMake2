#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure {
protected:
    double a, b, c;
    double angle_A, angle_B, angle_C;

    Triangle(double a, double b, double c,
        double angle_A, double angle_B, double angle_C,
        const std::string& name);

public:
    static Triangle create(double a, double b, double c,
        double angle_A, double angle_B, double angle_C);

    void print_info() const override;
};

#endif // TRIANGLE_H