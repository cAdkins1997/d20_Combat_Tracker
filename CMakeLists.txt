cmake_minimum_required(VERSION 3.23)
project(d20_Combat_Tracker)

set(CMAKE_CXX_STANDARD 23)

add_executable(d20_Combat_Tracker main.cpp selectionEnums.h CharSheet.cpp CharSheet.h CharCreationHelperFunctions.h selectionEnums.cpp CharCreationHelperFunctions.cpp Content/CharClassStructs.h Content/CharAncestryStructs.h Content/Ancestries/Human.cpp Content/Ancestries/Human.h Content/Ancestries/Elf.cpp Content/Ancestries/Elf.h Content/Ancestries/Dwarf.cpp Content/Ancestries/Dwarf.h Content/Ancestries/Ancestries.cpp Content/Ancestries/Ancestries.h)
