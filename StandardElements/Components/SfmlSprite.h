#pragma once
#include <SFML/Graphics/Sprite.hpp>
#include "Core/Component.h"

class SfmlSprite: public Component {
public:
    sf::Sprite sprite;
};
