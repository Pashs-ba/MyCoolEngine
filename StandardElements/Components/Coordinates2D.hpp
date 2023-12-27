#pragma once
#include "../../Core/ComponentBase.h"


class Coordinates2D: public ComponentBase {
public:
    Coordinates2D(double x, double y)
        : x(x),
          y(y) {
    }
    double x, y;

};