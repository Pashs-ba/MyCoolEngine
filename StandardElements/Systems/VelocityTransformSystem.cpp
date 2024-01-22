//
// Created by pashs on 22.01.24.
//

#include "VelocityTransformSystem.h"
#include "../Components/Transform.h"
#include "../Components/Velocity.h"
void VelocityTransformSystem::OnAfterRender(double dt,
                                            std::vector<sf::Event> &events,
                                            EntityManager &enitiyManager,
                                            AdditinalData data) {
    for (auto& [id, transform, velocity] : enitiyManager.GetEntitiesWithComponents<Transform, Velocity>()) {
        transform.changeX = velocity.x * dt;
        transform.changeY = velocity.y * dt;
    }
}
