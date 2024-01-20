#pragma once

#include "../../Core/ComponentBase.h"

class CoordinatesChange: public ComponentBase{
 public:
    CoordinatesChange() = default;
    double changeX;
    double changeY;
};
