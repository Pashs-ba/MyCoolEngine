#pragma once
#include "../../Core/ComponentBase.h"


class KeyboardMove: public ComponentBase{
public:
    explicit KeyboardMove(double _streight): streight(_streight){};
    double streight = 0;
};
