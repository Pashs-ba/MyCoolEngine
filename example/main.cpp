#include <SFML/Graphics.hpp>

#include "SinMoveSystem.h"
#include "Core/MainLoop.h"
#include "StandardElements/Components/Coordinates2D.hpp"
#include "StandardElements/Systems/SfmlSpritePositionSystem.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    window.setFramerateLimit(30);
    MainLoop loop;
    loop.addEntity(SfmlSprite(), SfmlTexture("test.png"), Coordinates2D(200, 200))
            .addEntity(SfmlSprite(), SfmlTexture("test.png"), Coordinates2D(100, 200));
    loop.addSystem(SfmlSpritePositionSystem())
            .addSystem(SinMoveSystem());
    while (window.isOpen()) {
        loop.MakeStep(window);
    }

    return 0;
}
