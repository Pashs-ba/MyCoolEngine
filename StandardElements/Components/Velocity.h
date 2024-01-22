#pragma once

#include "../../Core/ComponentBase.h"

class Velocity: public ComponentBase {
    public:
        explicit Velocity(double _x, double _y) : x(_x), y(_y) {};
        double x = 0;
        double y = 0;
};
