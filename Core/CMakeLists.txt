add_library(Core
        Component.h
        Component.cpp
        EntityManager.cpp
        EntityManager.h
        Entity.h
        SystemBase.h
        systems/RenderSystem.cpp
        systems/RenderSystem.h
        MainLoop.h
        MainLoop.cpp
        components/SfmlSprite.h
        components/SfmlSprite.cpp
        components/SfmlTexture.cpp
        components/SfmlTexture.h
)

target_link_libraries(Core PRIVATE sfml-system sfml-network sfml-graphics sfml-window)