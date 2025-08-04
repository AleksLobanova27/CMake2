#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
    Rhombus(double a,
        double angle_A, double angle_B);
};

#endif // RHOMBUS_H