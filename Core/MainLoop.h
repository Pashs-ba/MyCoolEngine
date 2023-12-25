#pragma once
#include <chrono>
#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>

#include "SystemBase.h"
#include "systems/RenderSystem.h"

class MainLoop {
public:
    MainLoop() {
        _prev = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch());
    }
    template<typename T>
    MainLoop& addSystem(const T& system) {
        _systems.emplace_back(std::make_shared<T>(system));
        return *this;
    };

    template<typename... TComponents>
    MainLoop&
    addEntity(const TComponents&... other) {
        _entityManager.addEntity<TComponents...>(other...);
        return *this;
    }

    void MakeStep(sf::RenderWindow& window);

private:
    std::chrono::milliseconds _prev{};
    EntityManager _entityManager;
    RenderSystem _renderSystem;
    std::vector<std::shared_ptr<SystemBase>> _systems{};
    std::vector<sf::Event> _events{};
};
