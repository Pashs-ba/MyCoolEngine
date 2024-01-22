//
// Created by pashs on 19.01.24.
//

#include "TransformSystem.h"
#include "../Components/Coordinates2D.hpp"
#include "../Components/Transform.h"
void TransformSystem::OnBeforeRender(double dt,
                                     std::vector<sf::Event> &events,
                                     EntityManager &enitiyManager,
                                     AdditinalData data) {
    for (auto const &[id, coordinates, coordinates_change] :
        enitiyManager.GetEntitiesWithComponents<Coordinates2D, Transform>()) {
        coordinates.x += coordinates_change.changeX;
        coordinates.y += coordinates_change.changeY;
        coordinates_change.changeX = 0;
        coordinates_change.changeY = 0;
    }
}
