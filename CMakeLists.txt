cmake_minimum_required(VERSION 3.20)

project(cass_engine_3 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(engine)
add_subdirectory(app)