#pragma once

#include "../../Core/ComponentBase.h"

class Transform: public ComponentBase{
 public:
    Transform() = default;
    double changeX;
    double changeY;
};
