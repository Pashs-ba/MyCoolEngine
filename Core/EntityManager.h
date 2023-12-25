#pragma once
#include <vector>
#include "Entity.h"

class EntityManager {
public:
    template<typename... TComponents>
    void
    addEntity(const TComponents&... other) {
        Enitity enitity;
        (enitity.addComponent<TComponents>(other), ...);
        _entities.push_back(enitity);
    }

    template<typename... TComponents>
    std::vector<std::tuple<size_t, TComponents &...>>
    GetEntitiesWithComponents() {
        std::vector<std::tuple<size_t, TComponents &...>> components;
        for (size_t i = 0; i < _entities.size(); i++) {
            if ((_entities[i].hasComponent<TComponents>() && ...)) {
                components.push_back({i, _entities[i].getComponent<TComponents>()...});
            }
        }
        return components;
    }

    Enitity GetEntityById(size_t id) {
        return _entities[id];
    }

private:
    std::vector<Enitity> _entities;
};
