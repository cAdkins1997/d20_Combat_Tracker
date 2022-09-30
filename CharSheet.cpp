//
// Created by cAdkins on 9/29/2022.
//

#include "CharSheet.h"


CharSheet::~CharSheet() = default;

CharSheet::CharSheet() = default;

const std::string &CharSheet::getPlayerName() const {
    return playerName;
}

void CharSheet::setPlayerName(const std::string &playerName) {
    CharSheet::playerName = playerName;
}

const std::string &CharSheet::getCharacterName() const {
    return characterName;
}

void CharSheet::setCharacterName(const std::string &characterName) {
    CharSheet::characterName = characterName;
}

const std::string &CharSheet::getCharClass() const {
    return charClass;
}

void CharSheet::setCharClass(const std::string &charClass) {
    CharSheet::charClass = charClass;
}

const std::string &CharSheet::getCharAncestry() const {
    return charAncestry;
}

void CharSheet::setCharAncestry(const std::string &charAncestry) {
    CharSheet::charAncestry = charAncestry;
}
