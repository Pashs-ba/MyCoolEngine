#pragma once
#include <SFML/Graphics/Texture.hpp>

#include "../ComponentBase.h"


class SfmlTexture: public ComponentBase {
public:
    explicit SfmlTexture(const std::string& path) {
        texture.loadFromFile(path);
        texture.setSmooth(true);
    }
    sf::Texture texture;
};
