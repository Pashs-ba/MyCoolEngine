add_library(StandardElements
        Components/Coordinates2D.hpp
        Components/Velocity2D.h
        Components/Coordinates2D.cpp
        Systems/SfmlSpritePositionSystem.cpp
        Systems/SfmlSpritePositionSystem.h)
target_link_libraries(StandardElements PRIVATE sfml-system sfml-network sfml-graphics sfml-window)
target_link_libraries(StandardElements PRIVATE Core)