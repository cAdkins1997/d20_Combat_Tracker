cmake_minimum_required(VERSION 3.23)
project(d20_Combat_Tracker)

set(CMAKE_CXX_STANDARD 23)

add_executable(d20_Combat_Tracker main.cpp Creation/selectionEnums.h Creation/CharSheet.cpp Creation/CharSheet.h Creation/CharCreationHelperFunctions.h Creation/selectionEnums.cpp Creation/CharCreationHelperFunctions.cpp Content/CharClassEnums.h Content/CharAncestryEnums.h)
