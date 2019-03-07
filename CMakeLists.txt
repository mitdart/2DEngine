cmake_minimum_required(VERSION 2.8)

project(Hackertyper2_0)



set(SFML_INCLUDE_DIR "SFML/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "SFML/SFML-2.5.1/lib")

include_directories("SFML/SFML-2.5.1/include")
link_directories("SFML/SFML-2.5.1/lib")

set(SFML_DIR "SFML/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)


set(project_sources main.cpp drawmanager.cpp eventmanager.cpp eventhandler.cpp application.cpp datastorage.cpp gameobject.cpp creature.cpp)






FOREACH(SRC ${project_sources})
    LIST(APPEND sources "src/${SRC}")
ENDFOREACH()

add_executable(${PROJECT_NAME} ${sources})

target_link_libraries (${PROJECT_NAME} sfml-graphics sfml-window sfml-system)

#Hello!Hello!Hello!
