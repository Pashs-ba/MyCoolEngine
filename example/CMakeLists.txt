add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Core)
target_link_libraries(${PROJECT_NAME} PRIVATE StandardElements)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})