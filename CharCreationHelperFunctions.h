//
// Created by cAdkins on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_CHARCREATIONHELPERFUNCTIONS_H
#define D20_COMBAT_TRACKER_CHARCREATIONHELPERFUNCTIONS_H


#include <iostream>
#include "selectionEnums.h"
#include "CharSheet.h"
#include "Content/Ancestries/Ancestry.h"

void creationDriver();

void nameSelection(CharSheet charSheet, const std::string& str, bool isTest, const std::string& nameType);
void ancestrySelection(CharSheet charSheet, bool isTest);

std::string ObjectToString();

#endif //D20_COMBAT_TRACKER_CHARCREATIONHELPERFUNCTIONS_H
