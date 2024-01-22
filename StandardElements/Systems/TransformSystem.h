#pragma once

#include "../../Core/SystemBase.h"
class TransformSystem : public SystemBase {
 public:
    void OnAfterRender(double dt,
                       std::vector<sf::Event> &events,
                       EntityManager &enitiyManager,
                       AdditinalData data) override { // Not need
    };
    void OnBeforeRender(double dt,
                        std::vector<sf::Event> &events,
                        EntityManager &enitiyManager,
                        AdditinalData data) override;
};
