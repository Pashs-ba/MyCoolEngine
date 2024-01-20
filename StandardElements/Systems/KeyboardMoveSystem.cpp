//
// Created by pashs on 26.12.23.
//

#include "KeyboardMoveSystem.h"

#include "../Components/KeyboardMove.h"
#include "../Components/CoordinatesChange.h"

void
KeyboardMoveSystem::OnBeforeRender(double dt,
                                   std::vector<sf::Event> &events,
                                   EntityManager &enitiyManager,
                                   AdditinalData data) {
    for (auto const &event : events) {
        if (event.type == sf::Event::KeyPressed) {
            switch (event.key.code) {
                case sf::Keyboard::W:_wPressed = true;
                    break;
                case sf::Keyboard::A:_aPressed = true;
                    break;
                case sf::Keyboard::S:_sPressed = true;
                    break;
                case sf::Keyboard::D:_dPressed = true;
                    break;
                default:;
            }
        }
        if (event.type == sf::Event::KeyReleased) {
            switch (event.key.code) {
                case sf::Keyboard::W:_wPressed = false;
                    break;
                case sf::Keyboard::A:_aPressed = false;
                    break;
                case sf::Keyboard::S:_sPressed = false;
                    break;
                case sf::Keyboard::D:_dPressed = false;
                    break;
                default:;
            }
        }
    }
    for (auto &[id, coord_change, keyboardMove] :
        enitiyManager.GetEntitiesWithComponents<CoordinatesChange, KeyboardMove>()) {
        if (_wPressed) {
            coord_change.changeY = -keyboardMove.streight * dt;
        }
        if (_aPressed) {
            coord_change.changeX = -keyboardMove.streight * dt;
        }
        if (_sPressed) {
            coord_change.changeY = keyboardMove.streight * dt;
        }
        if (_dPressed) {
            coord_change.changeX = keyboardMove.streight * dt;
        }
    }
}
