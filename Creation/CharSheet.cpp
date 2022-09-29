//
// Created by cAdkins on 9/29/2022.
//

#include "CharSheet.h"

 const std::string &CharSheet::getPlayerName() {
    return playerName;
}

void CharSheet::setPlayerName(const std::string &playerName) {
}

const std::string &CharSheet::getCharacterName() {
    return characterName;
}

void CharSheet::setCharacterName(const std::string &characterName) {
    CharSheet::characterName = characterName;
}

 ClassesEnum CharSheet::getCharClass() {
    return charClass;
}

void CharSheet::setCharClass(ClassesEnum charClass) {
    CharSheet::charClass = charClass;
}

CharSheet::CharSheet() = default;

CharSheet::~CharSheet() = default;
