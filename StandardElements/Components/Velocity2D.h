#pragma once
#include "Core/ComponentBase.h"

class Velocity2D : public ComponentBase {
public:
    Velocity2D(double x, double y)
        : x(x),
          y(y) {
    }

    double x, y;
};
