//
// Created by ulver on 9/29/2022.
//

#include "Ancestries.h"

const std::string &Ancestries::getAncestryName() const {
    return ancestryName;
}

void Ancestries::setAncestryName(const std::string &ancestryName) {
    Ancestries::ancestryName = ancestryName;
}

int Ancestries::getInitialHitPoints() const {
    return initialHitPoints;
}

void Ancestries::setInitialHitPoints(int initialHitPoints) {
    Ancestries::initialHitPoints = initialHitPoints;
}

int Ancestries::getSpeed() const {
    return speed;
}

void Ancestries::setSpeed(int speed) {
    Ancestries::speed = speed;
}

int Ancestries::getAncestralBoostStr() const {
    return ancestralBoostSTR;
}

void Ancestries::setAncestralBoostStr(int ancestralBoostStr) {
    ancestralBoostSTR = ancestralBoostStr;
}

int Ancestries::getAncestralBoostDex() const {
    return ancestralBoostDEX;
}

void Ancestries::setAncestralBoostDex(int ancestralBoostDex) {
    ancestralBoostDEX = ancestralBoostDex;
}

int Ancestries::getAncestralBoostCon() const {
    return ancestralBoostCON;
}

void Ancestries::setAncestralBoostCon(int ancestralBoostCon) {
    ancestralBoostCON = ancestralBoostCon;
}

int Ancestries::getAncestralBoostInt() const {
    return ancestralBoostINT;
}

void Ancestries::setAncestralBoostInt(int ancestralBoostInt) {
    ancestralBoostINT = ancestralBoostInt;
}

int Ancestries::getAncestralBoostWis() const {
    return ancestralBoostWIS;
}

void Ancestries::setAncestralBoostWis(int ancestralBoostWis) {
    ancestralBoostWIS = ancestralBoostWis;
}

int Ancestries::getAncestralBoostCha() const {
    return ancestralBoostCHA;
}

void Ancestries::setAncestralBoostCha(int ancestralBoostCha) {
    ancestralBoostCHA = ancestralBoostCha;
}

int Ancestries::getAncestralAbilityBoosts() const {
    return ancestralAbilityBoosts;
}

void Ancestries::setAncestralAbilityBoosts(int ancestralAbilityBoosts) {
    Ancestries::ancestralAbilityBoosts = ancestralAbilityBoosts;
}

int Ancestries::getAncestralBonusFeats() const {
    return ancestralBonusFeats;
}

void Ancestries::setAncestralBonusFeats(int ancestralBonusFeats) {
    Ancestries::ancestralBonusFeats = ancestralBonusFeats;
}

const std::string &Ancestries::getSize() const {
    return size;
}

void Ancestries::setSize(const std::string &size) {
    Ancestries::size = size;
}

const std::vector<std::string> &Ancestries::getType() const {
    return type;
}

void Ancestries::setType(const std::vector<std::string> &type) {
    Ancestries::type = type;
}

const std::vector<std::string> &Ancestries::getLanguages() const {
    return languages;
}

void Ancestries::setLanguages(const std::vector<std::string> &languages) {
    Ancestries::languages = languages;
}

const std::vector<std::string> &Ancestries::getValidLanguages() const {
    return validLanguages;
}

void Ancestries::setValidLanguages(const std::vector<std::string> &validLanguages) {
    Ancestries::validLanguages = validLanguages;
}

const std::vector<std::string> &Ancestries::getImmunities() const {
    return immunities;
}

void Ancestries::setImmunities(const std::vector<std::string> &immunities) {
    Ancestries::immunities = immunities;
}

int Ancestries::getAncestralBoostLang() const {
    return ancestralBoostLang;
}

void Ancestries::setAncestralBoostLang(int ancestralBoostLang) {
    Ancestries::ancestralBoostLang = ancestralBoostLang;
}

const std::string &Ancestries::getVisionType() const {
    return visionType;
}

void Ancestries::setVisionType(const std::string &visionType) {
    Ancestries::visionType = visionType;
}

Ancestries::Ancestries() {}

Ancestries::~Ancestries() {

}
