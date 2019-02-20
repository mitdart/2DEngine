cmake_minimum_required(VERSION 2.8)

project(Hackertyper2_0)



set(SFML_INCLUDE_DIR "/home/lenovo/Info Project/2DEngine/SFML/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "/home/lenovo/Info Project/2DEngine/SFML/SFML-2.5.1/lib")

include_directories("/home/lenovo/Info Project/2DEngine/SFML/SFML-2.5.1/include")
link_directories("/home/lenovo/Info Project/2DEngine/SFML/SFML-2.5.1/lib")

set(SFML_DIR "/home/lenovo/Info Project/2DEngine/SFML/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

set(project_sources main.cpp drawmanager.cpp eventmanager.cpp eventhandler.cpp)

add_executable(${PROJECT_NAME} ${project_sources})

target_link_libraries (${PROJECT_NAME} sfml-graphics sfml-window sfml-system)

