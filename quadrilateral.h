#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "figure.h"

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double angle_A, angle_B, angle_C, angle_D;

    Quadrilateral(double a, double b, double c, double d,
        double angle_A, double angle_B, double angle_C, double angle_D,
        const std::string& name);

public:
    static Quadrilateral create(double a, double b, double c, double d,
        double angle_A, double angle_B, double angle_C, double angle_D);

    void print_info() const override;
};

#endif // QUADRILATERAL_H