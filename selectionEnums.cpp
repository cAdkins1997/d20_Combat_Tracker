//
// Created by ulver on 9/29/2022.
//

#include "selectionEnums.h"

ClassesEnum ClassesStringConvertToEnum(const std::string& str) {
    if(str == "Fighter") return Fighter;
    else if(str == "Rogue") return Rogue;
    else if(str == "Ranger") return Ranger;
    else {
        return ClassesEnum::ClassErr;
    }
}

std::string ClassesEnumToString(ClassesEnum classesEnum) {
    if (classesEnum == Fighter) return "Fighter";
    else if (classesEnum == Rogue) return "Rogue";
    else if (classesEnum == Ranger) return "Ranger";
    else {
        return "invalid class";
    }
}

AncestryEnum AncestryStringConvertToEnum(const std::string& str) {
    if(str == "Human") return Human;
    else if(str == "Elf") return Elf;
    else if(str == "Dwarf") return Dwarf;
    else {
        return AncestryEnum::AncestryErr;
    }
}

std::string AncestryEnumToString(ClassesEnum classesEnum) {
    if (classesEnum == Human) return "Human";
    else if (classesEnum == Elf) return "Elf";
    else if (classesEnum == Dwarf) return "Dwarf";
    else {
        return "invalid class";
    }
}