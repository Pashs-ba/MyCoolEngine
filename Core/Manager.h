#pragma once
#include <unordered_map>
#include <vector>

#include "Entity.h"

class Manager {
public:
    template<typename... TComponents>
    void
    addEntity(TComponents... other) {
        Enitity enitity;
        (enitity.addComponent<TComponents>(other), ...);
        _entities.push_back(enitity);
    }

    template<typename... TComponents>
    std::vector<std::tuple<TComponents *...>>
    GetEntitiesWithComponents() {
        std::vector<std::tuple<TComponents* ...>> components;
        for (auto& entity: _entities) {
            if ((entity.hasComponent<TComponents>() && ...)) {
                components.push_back({entity.getComponent<TComponents>()...});
            }
        }
        return components;
    }

private:
    std::vector<Enitity> _entities;
};
