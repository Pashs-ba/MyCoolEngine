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
        Components/CoordinatesChange.cpp
        Components/CoordinatesChange.h
        Systems/CoordinatesChangeSystem.cpp
        Systems/CoordinatesChangeSystem.h)
target_link_libraries(StandardElements PRIVATE sfml-system sfml-network sfml-graphics sfml-window)
target_link_libraries(StandardElements PRIVATE Core)