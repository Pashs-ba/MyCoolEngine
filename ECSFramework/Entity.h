#pragma once
#include <memory>
#include <unordered_map>

#include "Component.h"
class Enitity {
public:
    template<typename T>
    bool hasComponent() const {
        return _components.contains(typeid(T).hash_code());
    }
    template<typename T>
    Enitity& addComponent(T component) {
        _components.insert({typeid(T).hash_code(), std::make_shared<T>(component)});
        return *this;
    }
    template<typename T>
    T* getComponent() {
        std::shared_ptr<Component>& component = _components.at(typeid(T).hash_code());
        return static_cast<T*>(component.get());
    }

    template<typename T>
    void removeComponent() {
        _components.erase(typeid(T).hash_code());
    }

private:
    std::unordered_map<size_t, std::shared_ptr<Component>> _components;
};
