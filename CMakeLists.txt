cmake_minimum_required(VERSION 3.14)
project(GraphDB)

set(CMAKE_CXX_STANDARD 14)

add_executable(GraphDB main.cpp Templates/Node.hpp Classes/Node.hpp Classes/Relation.hpp Classes/Graph.hpp)