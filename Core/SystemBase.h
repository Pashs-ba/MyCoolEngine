#pragma once
#include "EntityManager.h"
#include <SFML/Graphics.hpp>
#include "AdditionalData.h"

class SystemBase {
public:
    virtual void OnBeforeRender(double dt,
                                std::vector<sf::Event>& events,
                                EntityManager& enitiyManager,
                                AdditinalData data) = 0;

    virtual void OnAfterRender(double dt,
                               std::vector<sf::Event>& events,
                               EntityManager& enitiyManager,
                               AdditinalData data) = 0;

    virtual ~SystemBase() = default;
};
