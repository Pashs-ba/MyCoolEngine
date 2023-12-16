#pragma once
#include "Manager.h"

class SystemBase {
public:
    explicit SystemBase(Manager& manager): CurrentManager(manager) {
    }

    virtual void OnBeforeRender(double dt) = 0;
    virtual void OnAfterRender(double dt) = 0;

    virtual ~SystemBase() = default;

protected:
    Manager& CurrentManager;
};
