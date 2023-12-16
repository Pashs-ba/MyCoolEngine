#pragma once
#include "../../ECSFramework/Component.h"


class Velocity : public Component {
public:
    int x, y;

    Velocity(int x, int y): Component(), x(x), y(y) {
    }
};
