cmake_minimum_required(VERSION 3.10)
project(C_Game)

set(CMAKE_CXX_STANDARD 11)

add_executable(C_Game src/Main.cpp src/Game.cpp headers/Game.h src/Character.cpp headers/Character.h src/GameWorld.cpp headers/GameWorld.h)