#pragma once
#include "../../Core/SystemBase.h"
#include <SFML/Graphics.hpp>
class SfmlSpritePositionSystem: public SystemBase{
    void OnAfterRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) override{}
    void OnBeforeRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) override;
};

