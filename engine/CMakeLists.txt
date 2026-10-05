cmake_minimum_required(VERSION 3.20)

project(engine LANGUAGES CXX)

add_library(engine Application.cpp)

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})