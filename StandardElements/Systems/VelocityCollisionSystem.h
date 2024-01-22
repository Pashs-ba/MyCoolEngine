#pragma once

#include "../../Core/SystemBase.h"
class VelocityCollisionSystem: public SystemBase{
    void OnBeforeRender(double dt, std::vector<sf::Event> &events, EntityManager &enitiyManager, AdditinalData data) override{};
    void OnAfterRender(double dt, std::vector<sf::Event> &events, EntityManager &enitiyManager, AdditinalData data) override;
};

