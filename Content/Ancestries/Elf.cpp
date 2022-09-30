//
// Created by ulver on 9/29/2022.
//

#include "Elf.h"

Elf::Elf() = default;

Elf::~Elf() = default;

const std::string &Elf::getAncestryName() const {
    return ancestryName;
}

void Elf::setAncestryName(const std::string &ancestryName) {
    Ancestries::setAncestryName(ancestryName);
}

int Elf::getInitialHitPoints() const {
    return initialHitPoints;
}

void Elf::setInitialHitPoints(int initialHitPoints) {
    Ancestries::setInitialHitPoints(initialHitPoints);
}

int Elf::getSpeed() const {
    return speed;
}

void Elf::setSpeed(int speed) {
    Ancestries::setSpeed(speed);
}

int Elf::getAncestralBoostStr() const {
    return ancestralBoostSTR;
}

void Elf::setAncestralBoostStr(int ancestralBoostStr) {
    Ancestries::setAncestralBoostStr(ancestralBoostStr);
}

int Elf::getAncestralBoostDex() const {
    return ancestralBoostDEX;
}

void Elf::setAncestralBoostDex(int ancestralBoostDex) {
    Ancestries::setAncestralBoostDex(ancestralBoostDex);
}

int Elf::getAncestralBoostCon() const {
    return ancestralBoostCON;
}

void Elf::setAncestralBoostCon(int ancestralBoostCon) {
    Ancestries::setAncestralBoostCon(ancestralBoostCon);
}

int Elf::getAncestralBoostInt() const {
    return ancestralBoostINT;
}

void Elf::setAncestralBoostInt(int ancestralBoostInt) {
    Ancestries::setAncestralBoostInt(ancestralBoostInt);
}

int Elf::getAncestralBoostWis() const {
    return ancestralBoostWIS;
}

void Elf::setAncestralBoostWis(int ancestralBoostWis) {
    Ancestries::setAncestralBoostWis(ancestralBoostWis);
}

int Elf::getAncestralBoostCha() const {
    return ancestralBoostCHA;
}

void Elf::setAncestralBoostCha(int ancestralBoostCha) {
    Ancestries::setAncestralBoostCha(ancestralBoostCha);
}

int Elf::getAncestralAbilityBoosts() const {
    return ancestralAbilityBoosts;
}

void Elf::setAncestralAbilityBoosts(int ancestralAbilityBoosts) {
    Ancestries::setAncestralAbilityBoosts(ancestralAbilityBoosts);
}

int Elf::getAncestralBonusFeats() const {
    return ancestralBonusFeats;
}

void Elf::setAncestralBonusFeats(int ancestralBonusFeats) {
    Ancestries::setAncestralBonusFeats(ancestralBonusFeats);
}

const std::string &Elf::getSize() const {
    return size;
}

void Elf::setSize(const std::string &size) {
    Ancestries::setSize(size);
}

const std::vector<std::string> &Elf::getType() const {
    return type;
}

void Elf::setType(const std::vector<std::string> &type) {
    Ancestries::setType(type);
}

const std::vector<std::string> &Elf::getLanguages() const {
    return languages;
}

void Elf::setLanguages(const std::vector<std::string> &languages) {
    Ancestries::setLanguages(languages);
}

const std::vector<std::string> &Elf::getValidLanguages() const {
    return validLanguages;
}

void Elf::setValidLanguages(const std::vector<std::string> &validLanguages) {
    Ancestries::setValidLanguages(validLanguages);
}

const std::vector<std::string> &Elf::getImmunities() const {
    return immunities;
}

void Elf::setImmunities(const std::vector<std::string> &immunities) {
    Ancestries::setImmunities(immunities);
}

int Elf::getAncestralBoostLang() const {
    return ancestralAbilityBoosts;
}

void Elf::setAncestralBoostLang(int ancestralBoostLang) {
    Ancestries::setAncestralBoostLang(ancestralBoostLang);
}

const std::string &Elf::getVisionType() const {
    return visionType;
}

void Elf::setVisionType(const std::string &visionType) {
    Ancestries::setVisionType(visionType);
}
