//
// Created by cAdkins on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_SELECTIONENUMS_H
#define D20_COMBAT_TRACKER_SELECTIONENUMS_H

#include <map>
#include <string>
#include <iostream>

enum ClassesEnum {Fighter, Rogue, Ranger, ClassErr};
enum AncestryEnum {Human, Elf, Dwarf, AncestryErr};
enum humanHeritage {};
enum elfHeritage {};
enum dwarfHeritage {};
enum BackgroundEnum {};


ClassesEnum ClassesStringConvertToEnum(const std::string& str);
std::string ClassesEnumToString(ClassesEnum classesEnum);

AncestryEnum AncestryStringConvertToEnum(const std::string& str);
std::string AncestryEnumToString(ClassesEnum classesEnum);

#endif //D20_COMBAT_TRACKER_SELECTIONENUMS_H