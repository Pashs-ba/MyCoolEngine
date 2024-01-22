add_library(StandardElements
        Components/Coordinates2D.hpp
        Components/Velocity2D.h
        Systems/SfmlSpritePositionSystem.cpp
        Systems/SfmlSpritePositionSystem.h
        Components/KeyboardMove.h
        Systems/KeyboardMoveSystem.cpp
        Systems/KeyboardMoveSystem.h
        Components/Collidable.cpp
        Components/Collidable.h
        Components/Transform.cpp
        Components/Transform.h
        Systems/TransformSystem.cpp
        Systems/TransformSystem.h
        Systems/SolidBodyCollisionSystem.cpp
        Systems/SolidBodyCollisionSystem.h
        Components/SolidBody.cpp
        Components/SolidBody.h)
target_link_libraries(StandardElements PRIVATE sfml-system sfml-network sfml-graphics sfml-window)
target_link_libraries(StandardElements PRIVATE Core)