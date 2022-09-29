//
// Created by ulver on 9/29/2022.
//

#include "Ancestry.h"

Ancestry::Ancestry() = default;

Ancestry::~Ancestry() = default;

int Ancestry::getInitialHitPoints() const {
    return initialHitPoints;
}

void Ancestry::setInitialHitPoints(int initialHitPoints) {
    Ancestry::initialHitPoints = initialHitPoints;
}

int Ancestry::getSpeed() const {
    return speed;
}

void Ancestry::setSpeed(int speed) {
    Ancestry::speed = speed;
}

int Ancestry::getAncestralBoostStr() const {
    return ancestralBoostSTR;
}

void Ancestry::setAncestralBoostStr(int ancestralBoostStr) {
    ancestralBoostSTR = ancestralBoostStr;
}

int Ancestry::getAncestralBoostDex() const {
    return ancestralBoostDEX;
}

void Ancestry::setAncestralBoostDex(int ancestralBoostDex) {
    ancestralBoostDEX = ancestralBoostDex;
}

int Ancestry::getAncestralBoostCon() const {
    return ancestralBoostCON;
}

void Ancestry::setAncestralBoostCon(int ancestralBoostCon) {
    ancestralBoostCON = ancestralBoostCon;
}

int Ancestry::getAncestralBoostInt() const {
    return ancestralBoostINT;
}

void Ancestry::setAncestralBoostInt(int ancestralBoostInt) {
    ancestralBoostINT = ancestralBoostInt;
}

int Ancestry::getAncestralBoostWis() const {
    return ancestralBoostWIS;
}

void Ancestry::setAncestralBoostWis(int ancestralBoostWis) {
    ancestralBoostWIS = ancestralBoostWis;
}

int Ancestry::getAncestralBoostCha() const {
    return ancestralBoostCHA;
}

void Ancestry::setAncestralBoostCha(int ancestralBoostCha) {
    ancestralBoostCHA = ancestralBoostCha;
}

int Ancestry::getAncestralAbilityBoosts() const {
    return ancestralAbilityBoosts;
}

void Ancestry::setAncestralAbilityBoosts(int ancestralAbilityBoosts) {
    Ancestry::ancestralAbilityBoosts = ancestralAbilityBoosts;
}

int Ancestry::getAncestralBonusFeats() const {
    return ancestralBonusFeats;
}

void Ancestry::setAncestralBonusFeats(int ancestralBonusFeats) {
    Ancestry::ancestralBonusFeats = ancestralBonusFeats;
}

const std::string &Ancestry::getSize() const {
    return size;
}

void Ancestry::setSize(const std::string &size) {
    Ancestry::size = size;
}

const std::vector<std::string> &Ancestry::getType() const {
    return type;
}

void Ancestry::setType(const std::vector<std::string> &type) {
    Ancestry::type = type;
}

const std::vector<std::string> &Ancestry::getLanguages() const {
    return languages;
}

void Ancestry::setLanguages(const std::vector<std::string> &languages) {
    Ancestry::languages = languages;
}

int Ancestry::getAncestralBoostLang() const {
    return ancestralBoostLang;
}

void Ancestry::setAncestralBoostLang(int ancestralBoostLang) {
    Ancestry::ancestralBoostLang = ancestralBoostLang;
}

const std::string &Ancestry::getVisionType() const {
    return visionType;
}

void Ancestry::setVisionType(const std::string &visionType) {
    Ancestry::visionType = visionType;
}
