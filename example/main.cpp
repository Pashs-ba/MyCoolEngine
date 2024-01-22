#include <SFML/Graphics.hpp>

#include "Core/MainLoop.h"
#include "StandardElements/Components/Coordinates2D.hpp"
#include "StandardElements/Systems/SfmlSpritePositionSystem.h"
#include "StandardElements/Components/Collidable.h"
#include "StandardElements/Systems/TransformSystem.h"
#include "StandardElements/Components/Transform.h"
#include "StandardElements/Components/SolidBody.h"
#include "StandardElements/Systems/SolidBodyCollisionSystem.h"
#include "StandardElements/Components/Velocity.h"
#include "StandardElements/Systems/VelocityTransformSystem.h"
#include "StandardElements/Systems/VelocityCollisionSystem.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    window.setFramerateLimit(60);
    MainLoop loop;
    loop
        .addEntity(SfmlSprite(),
                   SfmlTexture("../../assets/red_rect.png"),
                   Coordinates2D(0, 50),
                   SolidBody(),
                   Collidable())
        .addEntity(SfmlSprite(),
                   SfmlTexture("../../assets/red_rect.png"),
                   Coordinates2D(380, 50),
                   SolidBody(),
                   Collidable())
        .addEntity(SfmlSprite(),
                   SfmlTexture("../../assets/player.png"),
                   Coordinates2D(40, 200),
                   Transform(),
                   SolidBody(),
                   Velocity(100000, 10000),
                   Collidable());
    loop.addSystem(SfmlSpritePositionSystem());
    loop.addSystem(SolidBodyCollisionSystem());
    loop.addSystem(VelocityTransformSystem());
    loop.addSystem(VelocityCollisionSystem());
    loop.addSystem(TransformSystem());


    while (window.isOpen()) {
        loop.MakeStep(window);
    }

    return 0;
}
