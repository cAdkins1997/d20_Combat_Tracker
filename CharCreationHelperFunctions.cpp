//
// Created by ulver on 9/29/2022.
//

#include "CharCreationHelperFunctions.h"
#include "Content\Ancestries\Human.h"
#include "Content/Ancestries/Elf.h"
#include "Content/Ancestries/Dwarf.h"

void ancestrySelection(CharSheet charSheet, const class Human& humanObject, const class Elf& elfObject, const class Dwarf& dwarfObject, bool isTest){
    int ancestryNumber;
    std::cout << "What is the character's ancestry: \n 1.) Human \n 2.) Elf \n 3.) Dwarf \n";
    std::cin >> ancestryNumber;
    if (ancestryNumber == 1){
        charSheet.setCharAncestry(humanObject.getAncestryName());
    }
    else if (ancestryNumber == 2){
        charSheet.setCharAncestry(elfObject.getAncestryName());
    }
    else if (ancestryNumber == 3){
        charSheet.setCharAncestry(dwarfObject.getAncestryName());
    }
    if (isTest){
        std::cout << "Character Ancestry is: " << charSheet.getCharAncestry();
    }
}

void nameSelection(CharSheet charSheet, const std::string& str, bool isTest, const std::string& nameType){
    std::string tempStringHolder;
    std::cout << str;
    std::cin >>tempStringHolder;
    if (nameType == "playerName"){
        charSheet.setPlayerName(tempStringHolder);
        if (isTest){
            std::cout << "The name is: " + charSheet.getPlayerName() + "\n";
        }
    }
    else if (nameType == "characterName"){
        charSheet.setCharacterName(tempStringHolder);
        if (isTest){
            std::cout << "The name is: " + charSheet.getCharacterName() + "\n";
        }
    }
}

void creationDriver(){
    {
        CharSheet characterSheet;
        class Human a;
        class Elf b;
        class Dwarf c;
        nameSelection(characterSheet, "What is the player's name?: \n", true, "playerName");
        nameSelection(characterSheet, "What is the character's name?: \n", true, "characterName");
        ancestrySelection(characterSheet, a, b, c, true);
    }
}