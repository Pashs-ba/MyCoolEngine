#pragma once
#include <SFML/Graphics/Texture.hpp>

#include "../Component.h"


class SfmlTexture: public Component {
public:
    explicit SfmlTexture(const std::string& path) {
        texture.loadFromFile(path);
    }
    sf::Texture texture;
};
