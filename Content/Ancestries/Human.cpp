//
// Created by ulver on 9/29/2022.
//

#include "Human.h"

Human::Human() = default;

Human::~Human() = default;

const std::string &Human::getAncestryName() const {
    return ancestryName;
}

void Human::setAncestryName(const std::string &ancestryName) {
    Ancestries::setAncestryName(ancestryName);
}

int Human::getInitialHitPoints() const {
    return initialHitPoints;
}

void Human::setInitialHitPoints(int initialHitPoints) {
    Ancestries::setInitialHitPoints(initialHitPoints);
}

int Human::getSpeed() const {
    return speed;
}

void Human::setSpeed(int speed) {
    Ancestries::setSpeed(speed);
}

int Human::getAncestralBoostStr() const {
    return ancestralBoostSTR;
}

void Human::setAncestralBoostStr(int ancestralBoostStr) {
    Ancestries::setAncestralBoostStr(ancestralBoostStr);
}

int Human::getAncestralBoostDex() const {
    return ancestralBoostDEX;
}

void Human::setAncestralBoostDex(int ancestralBoostDex) {
    Ancestries::setAncestralBoostDex(ancestralBoostDex);
}

int Human::getAncestralBoostCon() const {
    return ancestralBoostCON;
}

void Human::setAncestralBoostCon(int ancestralBoostCon) {
    Ancestries::setAncestralBoostCon(ancestralBoostCon);
}

int Human::getAncestralBoostInt() const {
    return ancestralBoostINT;
}

void Human::setAncestralBoostInt(int ancestralBoostInt) {
    Ancestries::setAncestralBoostInt(ancestralBoostInt);
}

int Human::getAncestralBoostWis() const {
    return ancestralBoostWIS;
}

void Human::setAncestralBoostWis(int ancestralBoostWis) {
    Ancestries::setAncestralBoostWis(ancestralBoostWis);
}

int Human::getAncestralBoostCha() const {
    return ancestralBoostCHA;
}

void Human::setAncestralBoostCha(int ancestralBoostCha) {
    Ancestries::setAncestralBoostCha(ancestralBoostCha);
}

int Human::getAncestralAbilityBoosts() const {
    return ancestralAbilityBoosts;
}

void Human::setAncestralAbilityBoosts(int ancestralAbilityBoosts) {
    Ancestries::setAncestralAbilityBoosts(ancestralAbilityBoosts);
}

int Human::getAncestralBonusFeats() const {
    return ancestralBonusFeats;
}

void Human::setAncestralBonusFeats(int ancestralBonusFeats) {
    Ancestries::setAncestralBonusFeats(ancestralBonusFeats);
}

const std::string &Human::getSize() const {
    return size;
}

void Human::setSize(const std::string &size) {
    Ancestries::setSize(size);
}

const std::vector<std::string> &Human::getType() const {
    return type;
}

void Human::setType(const std::vector<std::string> &type) {
    Ancestries::setType(type);
}

const std::vector<std::string> &Human::getLanguages() const {
    return languages;
}

void Human::setLanguages(const std::vector<std::string> &languages) {
    Ancestries::setLanguages(languages);
}

const std::vector<std::string> &Human::getValidLanguages() const {
    return validLanguages;
}

void Human::setValidLanguages(const std::vector<std::string> &validLanguages) {
    Ancestries::setValidLanguages(validLanguages);
}

const std::vector<std::string> &Human::getImmunities() const {
    return immunities;
}

void Human::setImmunities(const std::vector<std::string> &immunities) {
    Ancestries::setImmunities(immunities);
}

int Human::getAncestralBoostLang() const {
    return ancestralAbilityBoosts;
}

void Human::setAncestralBoostLang(int ancestralBoostLang) {
    Ancestries::setAncestralBoostLang(ancestralBoostLang);
}

const std::string &Human::getVisionType() const {
    return visionType;
}

void Human::setVisionType(const std::string &visionType) {
    Ancestries::setVisionType(visionType);
}
