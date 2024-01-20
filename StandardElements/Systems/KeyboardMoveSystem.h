#pragma once
#include "../../Core/SystemBase.h"

class KeyboardMoveSystem : public SystemBase {
 public:
    void OnBeforeRender(double dt,
                        std::vector<sf::Event> &events,
                        EntityManager &enitiyManager,
                        AdditinalData data) override;
    void OnAfterRender(double dt,
                       std::vector<sf::Event> &events,
                       EntityManager &enitiyManager,
                       AdditinalData data) override { //Not need
    };
 private:
    bool _wPressed = false;
    bool _aPressed = false;
    bool _sPressed = false;
    bool _dPressed = false;
};

