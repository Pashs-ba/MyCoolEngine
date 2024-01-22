#include <SFML/Graphics.hpp>

#include "Core/MainLoop.h"
#include "StandardElements/Components/Coordinates2D.hpp"
#include "StandardElements/Components/KeyboardMove.h"
#include "StandardElements/Systems/KeyboardMoveSystem.h"
#include "StandardElements/Systems/SfmlSpritePositionSystem.h"
#include "StandardElements/Components/Collidable.h"
#include "StandardElements/Systems/TransformSystem.h"
#include "StandardElements/Components/Transform.h"
#include "StandardElements/Components/SolidBody.h"
#include "StandardElements/Systems/SolidBodyCollisionSystem.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    window.setFramerateLimit(60);
    MainLoop loop;
    loop
        .addEntity(SfmlSprite(),
                   SfmlTexture("../../assets/red_rect.png"),
                   Coordinates2D(200, 200),
                   SolidBody(),
                   Collidable())
        .addEntity(SfmlSprite(),
                   SfmlTexture("../../assets/red_rect.png"),
                   Coordinates2D(100, 200),
                   SolidBody(),
                   Collidable())
        .addEntity(SfmlSprite(),
                   SfmlTexture("../../assets/player.png"),
                   Coordinates2D(10, 200),
                   Transform(),
                   SolidBody(),
                   KeyboardMove(100000),
                   Collidable());
    loop.addSystem(SfmlSpritePositionSystem());
    loop.addSystem(KeyboardMoveSystem());
    loop.addSystem(SolidBodyCollisionSystem());
    loop.addSystem(TransformSystem());

    while (window.isOpen()) {
        loop.MakeStep(window);
    }

    return 0;
}
