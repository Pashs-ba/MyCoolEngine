//
// Created by pashs on 19.01.24.
//

#include "CoordinatesChangeSystem.h"
#include "../Components/Coordinates2D.hpp"
#include "../Components/CoordinatesChange.h"
void CoordinatesChangeSystem::OnBeforeRender(double dt,
                                             std::vector<sf::Event> &events,
                                             EntityManager &enitiyManager,
                                             AdditinalData data) {
    for (auto const &[id, coordinates, coordinates_change] :
        enitiyManager.GetEntitiesWithComponents<Coordinates2D, CoordinatesChange>()) {
        coordinates.x += coordinates_change.changeX;
        coordinates.y += coordinates_change.changeY;
        coordinates_change.changeX = 0;
        coordinates_change.changeY = 0;
    }
}
