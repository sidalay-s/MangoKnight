cmake_minimum_required(VERSION 3.17)
project(PROJECT_NAME)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp src/player.cpp src/spellbook.cpp headers/player.hpp headers/spellbook.hpp)

file(MAKE_DIRECTORY headers src assets)
file(MAKE_DIRECTORY "assets/image" "assets/audio" "assets/fonts")

include_directories(headers)

set(SFML_DIR "C:/SFML/install/lib/cmake/SFML")
find_package(SFML COMPONENTS graphics audio network window system REQUIRED)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio sfml-network)

## ----------- Add dependencies to build folder ----------- ##

# Copy assets to build directory
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})
# Copy dlls to build directory
if(WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
    file(GLOB MINGW_DEP_DLLS "C:/MinGW/bin/*.dll")
    file(COPY ${MINGW_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()