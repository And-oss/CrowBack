cmake_minimum_required(VERSION 3.24)
project(tryWeb)

set(CMAKE_CXX_STANDARD 17)

find_package(PostgreSQL)

add_executable(tryWeb main.cpp crow_all.h)