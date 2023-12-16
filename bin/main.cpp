#include <bitset>
#include <iostream>
#include <SFML/Graphics.hpp>

#include "ECSFramework/Manager.h"
#include "src/Components/Coordinates.h"
#include "src/Components/Velocity.h"


int main() {
    std::shared_ptr<Component> ptr = std::make_shared<Velocity>(1, 0);
    Manager manager;
    manager.addEntity(Velocity(1, 0), Coordinates(0, 0));
    manager.addEntity(Coordinates(0, 0));
    for (auto& [velocity, coordinates]: manager.GetWithComponents<Velocity, Coordinates>()) {
        coordinates->x += velocity->x;
        coordinates->y += velocity->y;
    }

    for (auto& [i]: manager.GetWithComponents<Coordinates>()) {
        std::cout << i->x<<' '<<i->y << std::endl;
    }
    return 0;
}
