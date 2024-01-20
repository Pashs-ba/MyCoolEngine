#pragma once
#include "../../Core/SystemBase.h"
#include <SFML/Graphics.hpp>
class SfmlSpritePositionSystem : public SystemBase {
    void OnAfterRender(double dt,
                       std::vector<sf::Event> &events,
                       EntityManager &enitiyManager,
                       AdditinalData data) override { // Not need
    }

    void OnBeforeRender(double dt,
                        std::vector<sf::Event> &events,
                        EntityManager &enitiyManager,
                        AdditinalData data) override;
};

