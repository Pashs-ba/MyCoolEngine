//
// Created by pashs on 20.01.24.
//

#include "SolidBodyCollisionSystem.h"
#include "../Components/Collidable.h"
#include "../Components/SolidBody.h"
#include "../Components/Transform.h"
#include "../../Core/components/SfmlSprite.h"

sf::FloatRect MakeNextPosition(sf::FloatRect rect, float x, float y) {
    rect.left += x;
    rect.top += y;
    return rect;
}

void SolidBodyCollisionSystem::OnBeforeRender(double dt,
                                              std::vector<sf::Event> &events,
                                              EntityManager &enitiyManager,
                                              AdditinalData data) {
    for (auto &[id, collision, solidBody, transform, sfmlSprite]
        : enitiyManager.GetEntitiesWithComponents<Collidable, SolidBody, Transform, SfmlSprite>()) {
        for (auto const &[id2, collision2, solidBody2, sfmlSprite2]
            : enitiyManager.GetEntitiesWithComponents<Collidable, SolidBody, SfmlSprite>()) {
            if (id == id2) continue;
            auto rect1 = MakeNextPosition(sfmlSprite.sprite.getGlobalBounds(),
                                          transform.changeX,
                                          transform.changeY);
            auto rect2 = sfmlSprite2.sprite.getGlobalBounds();

            if (rect1.intersects(rect2)) {
                transform.changeX = 0;
                transform.changeY = 0;
            }
        }
    }

}
