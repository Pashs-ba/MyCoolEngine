add_executable(${PROJECT_NAME} main.cpp
        SinMoveSystem.cpp
        SinMoveSystem.h)
target_link_libraries(${PROJECT_NAME} PUBLIC Core)
target_link_libraries(${PROJECT_NAME} PUBLIC StandardElements)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})