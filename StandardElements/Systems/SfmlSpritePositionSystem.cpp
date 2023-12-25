//
// Created by pashs on 25.12.23.
//

#include "SfmlSpritePositionSystem.h"
#include "../Components/Coordinates2D.hpp"
#include "../../Core/components/SfmlSprite.h"

void SfmlSpritePositionSystem::OnBeforeRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) {
    for (auto& [id, sprite, position]: enitiyManager.GetEntitiesWithComponents<SfmlSprite, Coordinates2D>()) {
        sprite.sprite.setPosition(sf::Vector2f(position.x, position.y));
    }
}
