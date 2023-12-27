//
// Created by pashs on 26.12.23.
//

#include "KeyboardMoveSystem.h"

#include "../Components/Coordinates2D.hpp"
#include "../Components/KeyboardMove.h"

void
KeyboardMoveSystem::OnBeforeRender(double dt,
                                   std::vector<sf::Event>& events,
                                   EntityManager& enitiyManager,
                                   AdditinalData data) {
    for (auto& event: events) {
        if (event.type == sf::Event::KeyPressed) {
            switch (event.key.code) {
                case sf::Keyboard::W:
                    _wPressed = true;
                    break;
                case sf::Keyboard::A:
                    _aPressed = true;
                    break;
                case sf::Keyboard::S:
                    _sPressed = true;
                    break;
                case sf::Keyboard::D:
                    _dPressed = true;
                    break;
                default: ;
            }
        }
        if (event.type == sf::Event::KeyReleased) {
            switch (event.key.code) {
                case sf::Keyboard::W:
                    _wPressed = false;
                    break;
                case sf::Keyboard::A:
                    _aPressed = false;
                    break;
                case sf::Keyboard::S:
                    _sPressed = false;
                    break;
                case sf::Keyboard::D:
                    _dPressed = false;
                    break;
                default: ;
            }
        }
    }
    for (auto& [id, coord, keyboardMove]: enitiyManager.GetEntitiesWithComponents<Coordinates2D, KeyboardMove>()) {
        if (_wPressed) {
            coord.y -= keyboardMove.streight * dt;
        }
        if (_aPressed) {
            coord.x -= keyboardMove.streight * dt;
        }
        if (_sPressed) {
            coord.y += keyboardMove.streight * dt;
        }
        if (_dPressed) {
            coord.x += keyboardMove.streight * dt;
        }
    }
}
