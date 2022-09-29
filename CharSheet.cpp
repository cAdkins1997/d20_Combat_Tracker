//
// Created by cAdkins on 9/29/2022.
//

#include "CharSheet.h"

 const std::string &CharSheet::getPlayerName() {
    return playerName;
}

void CharSheet::setPlayerName(const std::string &playerName) {
    CharSheet::playerName = playerName;
}

const std::string &CharSheet::getCharacterName() {
    return characterName;
}

void CharSheet::setCharacterName(const std::string &characterName) {
    CharSheet::characterName = characterName;
}

 std::basic_string<char> CharSheet::getCharClass() {
    return charClass;
}

void CharSheet::setCharClass(ClassesEnum charClass) {
    CharSheet::charClass = charClass;
}

const std::string &CharSheet::getCharAncestry() const {
    return charAncestry;
}

void CharSheet::setCharAncestry(const std::string &charAncestry) {
    CharSheet::charAncestry = charAncestry;
}

CharSheet::CharSheet() = default;

CharSheet::~CharSheet() = default;
