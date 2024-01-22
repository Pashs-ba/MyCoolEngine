//
// Created by pashs on 22.01.24.
//

#include "VelocityCollisionSystem.h"
#include "../Components/Transform.h"
#include "../Components/Velocity.h"
#include "../../Core/components/SfmlSprite.h"
#include "../Components/SolidBody.h"
namespace inner {
    sf::FloatRect MakeNextPosition(sf::FloatRect rect, float x, float y) {
        rect.left += x;
        rect.top += y;
        return rect;
    }
}

void VelocityCollisionSystem::OnAfterRender(double dt,
                                            std::vector<sf::Event> &events,
                                            EntityManager &enitiyManager,
                                            AdditinalData data) {
    for (auto &[id, transform, velocity, sfml_sprite] : enitiyManager.GetEntitiesWithComponents<Transform,
                                                                                                Velocity,
                                                                                                SfmlSprite>()) {
        for (auto &[id2, solid_body, sfml_sprite2] : enitiyManager.GetEntitiesWithComponents<SolidBody, SfmlSprite>()) {
            if (id == id2) continue;
            auto rect1 = inner::MakeNextPosition(sfml_sprite.sprite.getGlobalBounds(),
                                                 transform.changeX,
                                                 transform.changeY);
            auto rect2 = sfml_sprite2.sprite.getGlobalBounds();
            if (rect1.intersects(rect2)) {
                velocity.x = -velocity.x;
                velocity.y = -velocity.y;
            }
        }
    }
}
