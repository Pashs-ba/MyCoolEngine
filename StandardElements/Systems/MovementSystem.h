#pragma once
#include "../../Core/SystemBase.h"

class MovementSystem : SystemBase {
public:
    explicit MovementSystem(::Manager& manager)
        : SystemBase(manager) {
    }
    void OnBeforeRender(double dt) override;
    void OnAfterRender(double dt) override;
};

