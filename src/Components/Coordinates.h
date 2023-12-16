#pragma once
#include "../../ECSFramework/Component.h"

class Coordinates : public Component {
public:
    Coordinates(int _x, int _y) : Component(), x(_x), y(_y) {
    }
    int x, y;
};
