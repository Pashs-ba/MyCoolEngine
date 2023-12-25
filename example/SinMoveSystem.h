#pragma once
#include <chrono>

#include "Core/SystemBase.h"
#include "StandardElements/Components/Coordinates2D.hpp"
#include <cmath>
#include <iostream>

class SinMoveSystem : public SystemBase {
    void OnAfterRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) override {
    }

    void OnBeforeRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager) override {
        for (auto& [id, coordinates]: enitiyManager.GetEntitiesWithComponents<Coordinates2D>()) {
            auto time = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now().time_since_epoch()).count();
            coordinates.y += std::sin(time/100)*10;
        }
    }
};
