#pragma once

#include "../../Core/SystemBase.h"

class SolidBodyCollisionSystem : public SystemBase {
    void OnAfterRender(double dt,
                       std::vector<sf::Event> &events,
                       EntityManager &enitiyManager,
                       AdditinalData data) override {};
    void OnBeforeRender(double dt,
                        std::vector<sf::Event> &events,
                        EntityManager &enitiyManager,
                        AdditinalData data) override;
};
