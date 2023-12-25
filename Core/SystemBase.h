#pragma once
#include "EntityManager.h"
#include <SFML/Graphics.hpp>


class SystemBase {
public:

    virtual void OnBeforeRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) = 0;
    virtual void OnAfterRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) = 0;

    virtual ~SystemBase() = default;
};
