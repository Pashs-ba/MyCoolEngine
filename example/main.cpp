#include <iostream>
#include <SFML/Graphics.hpp>

#include "Core/Manager.h"
#include "StandardElements/Components/Velocity2D.h"
#include "StandardElements/Components/Coordinates2D.h"
#include "StandardElements/Components/SfmlSprite.h"


int main() {
    Manager manager;
    manager.addEntity(Velocity2D(1, 0), Coordinates2D(0, 0), SfmlSprite());
    manager.addEntity(Coordinates2D(0, 0));

    for (auto& [velocity, coordinates]: manager.GetEntitiesWithComponents<Velocity2D, Coordinates2D>()) {
        coordinates->x += velocity->x;
        coordinates->y += velocity->y;
    }

    for (auto& [i]: manager.GetEntitiesWithComponents<Coordinates2D>()) {
        std::cout << i->x << ' ' << i->y << std::endl;
    }
    return 0;
}
