//
// Created by ulver on 9/29/2022.
//

#include "Dwarf.h"

Dwarf::Dwarf() = default;

Dwarf::~Dwarf() = default;

const std::string &Dwarf::getAncestryName() const {
    return ancestryName;
}

void Dwarf::setAncestryName(const std::string &ancestryName) {
    Ancestries::setAncestryName(ancestryName);
}

int Dwarf::getInitialHitPoints() const {
    return initialHitPoints;
}

void Dwarf::setInitialHitPoints(int initialHitPoints) {
    Ancestries::setInitialHitPoints(initialHitPoints);
}

int Dwarf::getSpeed() const {
    return speed;
}

void Dwarf::setSpeed(int speed) {
    Ancestries::setSpeed(speed);
}

int Dwarf::getAncestralBoostStr() const {
    return ancestralBoostSTR;
}

void Dwarf::setAncestralBoostStr(int ancestralBoostStr) {
    Ancestries::setAncestralBoostStr(ancestralBoostStr);
}

int Dwarf::getAncestralBoostDex() const {
    return ancestralBoostDEX;
}

void Dwarf::setAncestralBoostDex(int ancestralBoostDex) {
    Ancestries::setAncestralBoostDex(ancestralBoostDex);
}

int Dwarf::getAncestralBoostCon() const {
    return ancestralBoostCON;
}

void Dwarf::setAncestralBoostCon(int ancestralBoostCon) {
    Ancestries::setAncestralBoostCon(ancestralBoostCon);
}

int Dwarf::getAncestralBoostInt() const {
    return ancestralBoostINT;
}

void Dwarf::setAncestralBoostInt(int ancestralBoostInt) {
    Ancestries::setAncestralBoostInt(ancestralBoostInt);
}

int Dwarf::getAncestralBoostWis() const {
    return ancestralBoostWIS;
}

void Dwarf::setAncestralBoostWis(int ancestralBoostWis) {
    Ancestries::setAncestralBoostWis(ancestralBoostWis);
}

int Dwarf::getAncestralBoostCha() const {
    return ancestralBoostCHA;
}

void Dwarf::setAncestralBoostCha(int ancestralBoostCha) {
    Ancestries::setAncestralBoostCha(ancestralBoostCha);
}

int Dwarf::getAncestralAbilityBoosts() const {
    return ancestralAbilityBoosts;
}

void Dwarf::setAncestralAbilityBoosts(int ancestralAbilityBoosts) {
    Ancestries::setAncestralAbilityBoosts(ancestralAbilityBoosts);
}

int Dwarf::getAncestralBonusFeats() const {
    return ancestralBonusFeats;
}

void Dwarf::setAncestralBonusFeats(int ancestralBonusFeats) {
    Ancestries::setAncestralBonusFeats(ancestralBonusFeats);
}

const std::string &Dwarf::getSize() const {
    return size;
}

void Dwarf::setSize(const std::string &size) {
    Ancestries::setSize(size);
}

const std::vector<std::string> &Dwarf::getType() const {
    return type;
}

void Dwarf::setType(const std::vector<std::string> &type) {
    Ancestries::setType(type);
}

const std::vector<std::string> &Dwarf::getLanguages() const {
    return languages;
}

void Dwarf::setLanguages(const std::vector<std::string> &languages) {
    Ancestries::setLanguages(languages);
}

const std::vector<std::string> &Dwarf::getValidLanguages() const {
    return validLanguages;
}

void Dwarf::setValidLanguages(const std::vector<std::string> &validLanguages) {
    Ancestries::setValidLanguages(validLanguages);
}

const std::vector<std::string> &Dwarf::getImmunities() const {
    return immunities;
}

void Dwarf::setImmunities(const std::vector<std::string> &immunities) {
    Ancestries::setImmunities(immunities);
}

int Dwarf::getAncestralBoostLang() const {
    return ancestralAbilityBoosts;
}

void Dwarf::setAncestralBoostLang(int ancestralBoostLang) {
    Ancestries::setAncestralBoostLang(ancestralBoostLang);
}

const std::string &Dwarf::getVisionType() const {
    return visionType;
}

void Dwarf::setVisionType(const std::string &visionType) {
    Ancestries::setVisionType(visionType);
}
