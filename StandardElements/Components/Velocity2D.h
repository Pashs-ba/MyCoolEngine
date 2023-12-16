#pragma once
#include "Core/Component.h"

class Velocity2D : public Component {
public:
    Velocity2D(double x, double y)
        : x(x),
          y(y) {
    }

    double x, y;
};
