# CMAKELIST.TXT

cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17);
set( PROJECT_NAME Sorting-Algorithm)
project(${PROJECT_NAME})

# Finds the necessary files for the project
file(GLOB_RECURSE SCRS_FILES "src/*.cpp" "src/*.hpp" "src/*.h" "src/*.c")

# Adds executable files
add_executable(${PROJECT_NAME} ${SCRS_FILES})