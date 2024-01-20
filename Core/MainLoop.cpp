//
// Created by pashs on 23.12.23.
//

#include "MainLoop.h"

void MainLoop::MakeStep(sf::RenderWindow& window) {
    _events.clear();
    sf::Event event;
    while (window.pollEvent(event)) {
        _events.push_back(event);
        if (event.type == sf::Event::Closed) {
            window.close();
            return;
        }
    }
    auto dt = std::chrono::duration<double>(std::chrono::duration_cast<std::chrono::milliseconds>(
                                                std::chrono::system_clock::now().time_since_epoch()) - _prev).count() /
              1000.0;
    _prev = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());
    for (auto const& system: _systems) {
        system->OnBeforeRender(dt, _events, _entityManager, AdditinalData{{window.getSize().x, window.getSize().y}});
    }
    RenderSystem::Render(window, _entityManager);
    for (auto const& system: _systems) {
        system->OnAfterRender(dt, _events, _entityManager, AdditinalData{{window.getSize().x, window.getSize().y}});
    }
}
