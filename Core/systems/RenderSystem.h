#pragma once
#include "../SystemBase.h"
#include "../components/SfmlSprite.h"
#include "../components/SfmlTexture.h"

class RenderSystem : public SystemBase {
public:
    void OnBeforeRender(double dt, std::vector<sf::Event>& events, EntityManager& entityManager) override {
    };

    void OnAfterRender(double dt, std::vector<sf::Event>& events, EntityManager& entityManager) override {
    };

    static void Render(sf::RenderWindow& window, EntityManager& entityManager) {
        window.clear();
        for (auto& [id, sprite, texture]: entityManager.GetEntitiesWithComponents<SfmlSprite, SfmlTexture>()) {
            sprite.sprite.setTexture(texture.texture);
            window.draw(sprite.sprite);
        }
        window.display();
    };
};
