//
// Created by cAdkins on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_CHARCREATIONHELPERFUNCTIONS_H
#define D20_COMBAT_TRACKER_CHARCREATIONHELPERFUNCTIONS_H


#include <iostream>
#include "selectionEnums.h"
#include "CharSheet.h"
#include "Content/Ancestries/Human.h"
#include "Content/Ancestries/Elf.h"
#include "Content/Ancestries/Dwarf.h"

void creationDriver();

void nameSelection(CharSheet charSheet, const std::string& str, bool isTest, const std::string& nameType);

void ancestrySelection(CharSheet charSheet, bool isTest);

void charClassSelection(CharSheet charSheet, bool isTest);

#endif //D20_COMBAT_TRACKER_CHARCREATIONHELPERFUNCTIONS_H
