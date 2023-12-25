cmake_minimum_required(VERSION 3.27)
project(MyCoolEngine)
set(CMAKE_CXX_STANDARD 20)

find_package(SFML COMPONENTS system window graphics CONFIG REQUIRED)
add_subdirectory(Core)
add_subdirectory(example)
add_subdirectory(StandardElements)
target_link_libraries(MyCoolEngine PUBLIC sfml-system sfml-network sfml-graphics sfml-window)
