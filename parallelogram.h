#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b,
        double angle_A, double angle_B);
};

#endif // PARALLELOGRAM_H