//
// Created by ulver on 9/29/2022.
//

#include "CharCreationHelperFunctions.h"

void creationDriver(){
    {
        CharSheet characterSheet;
        std::string tempStringHolder;

        std::cout << "What is the player name?: \n";
        std::cin >> tempStringHolder;
        characterSheet.setPlayerName(tempStringHolder);
        std::cout << "The player's name is : " + characterSheet.getPlayerName() + "\n";


        std::cout << "What is the character's name?: \n";
        std::cin >> tempStringHolder;
        characterSheet.setCharacterName(tempStringHolder);
        std::cout << "The character's name is : " + characterSheet.getCharacterName() + "\n";

        std::cout << "What is the character's class: \n";
        std::cin >> tempStringHolder;
        ClassesEnum charClass = ClassesStringConvertToEnum(tempStringHolder);
        characterSheet.setCharClass(charClass);
        std::cout << "The character's class is: " << ClassesEnumToString(characterSheet.getCharClass());
    }
}