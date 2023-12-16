cmake_minimum_required(VERSION 3.27)
project(MyCoolEngine)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(ECSFramework)
add_subdirectory(src)
add_subdirectory(bin)
find_package(SFML COMPONENTS system window graphics CONFIG REQUIRED)
target_link_libraries(MyCoolEngine PRIVATE sfml-system sfml-network sfml-graphics sfml-window)