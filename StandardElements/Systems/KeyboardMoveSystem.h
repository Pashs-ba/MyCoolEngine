#pragma once
#include "../../Core/SystemBase.h"


class KeyboardMoveSystem: public SystemBase{
    void OnBeforeRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager, AdditinalData data) override;
    void OnAfterRender(double dt, std::vector<sf::Event>& events, EntityManager& enitiyManager, AdditinalData data) override{};
private:
    bool _wPressed = false;
    bool _aPressed = false;
    bool _sPressed = false;
    bool _dPressed = false;
};

