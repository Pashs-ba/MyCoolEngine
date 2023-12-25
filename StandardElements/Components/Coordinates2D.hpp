#pragma once
#include "../../Core/Component.h"


class Coordinates2D: public Component {
public:
    Coordinates2D(double x, double y)
        : x(x),
          y(y) {
    }
    double x, y;

};