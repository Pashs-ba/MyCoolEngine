#pragma once

#include "../../Core/SystemBase.h"
class VelocityTransformSystem: public SystemBase {
    void OnBeforeRender(double dt, std::vector<sf::Event> &events, EntityManager &enitiyManager, AdditinalData data) override{};
    void OnAfterRender(double dt, std::vector<sf::Event> &events, EntityManager &enitiyManager, AdditinalData data) override;
};

