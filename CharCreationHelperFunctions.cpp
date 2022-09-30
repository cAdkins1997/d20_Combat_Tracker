//
// Created by ulver on 9/29/2022.
//

#include "CharCreationHelperFunctions.h"
#include "Content\Ancestries\Human.h"
#include "Content/Ancestries/Elf.h"
#include "Content/Ancestries/Dwarf.h"

void charClassSelection(CharSheet charSheet, bool isTest){
    int charClassNumber;
    std::cout << "What is the the character's class: \n 1.) Fighter \n 2.) Ranger \n 3.) Rouge";
    std::cin >> charClassNumber;
    if (charClassNumber == 1){
        charSheet.setCharClass("Fighter");
    }
    else if (charClassNumber == 2){
        charSheet.setCharClass("Ranger");
    }
    else if (charClassNumber == 3){
        charSheet.setCharClass("Rogue");
    }
}

void ancestrySelection(CharSheet charSheet, bool isTest){
    int ancestryNumber;
    std::cout << "What is the character's ancestry: \n 1.) Human \n 2.) Elf \n 3.) Dwarf \n";
    std::cin >> ancestryNumber;
    if (ancestryNumber == 1){
        class Human humanObject;
        charSheet.setCharAncestry(humanObject.getAncestryName());
    }
    else if (ancestryNumber == 2){
        class Elf elfObject;
        charSheet.setCharAncestry(elfObject.getAncestryName());
    }
    else if (ancestryNumber == 3){
        class Dwarf dwarfObject;
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
        nameSelection(characterSheet, "What is the player's name?: \n", true, "playerName");
        nameSelection(characterSheet, "What is the character's name?: \n", true, "characterName");
        ancestrySelection(characterSheet, true);
    }
}