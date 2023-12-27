#pragma once
#include <SFML/Graphics/Sprite.hpp>
#include "../ComponentBase.h"

class SfmlSprite : public ComponentBase {
public:
    sf::Sprite sprite{};
};
