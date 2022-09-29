//
// Created by ulver on 9/29/2022.
//

#include "Elf.h"

Elf::Elf() = default;

Elf::~Elf() = default;

int Elf::getInitialHitPoints1() const {
    return initialHitPoints;
}

void Elf::setInitialHitPoints1(int initialHitPoints) {
    Elf::initialHitPoints = initialHitPoints;
}

int Elf::getSpeed1() const {
    return speed;
}

void Elf::setSpeed1(int speed) {
    Elf::speed = speed;
}

int Elf::getAncestralBoostDex1() const {
    return ancestralBoostDEX;
}

void Elf::setAncestralBoostDex1(int ancestralBoostDex) {
    ancestralBoostDEX = ancestralBoostDex;
}

int Elf::getAncestralBoostCon1() const {
    return ancestralBoostCON;
}

void Elf::setAncestralBoostCon1(int ancestralBoostCon) {
    ancestralBoostCON = ancestralBoostCon;
}

int Elf::getAncestralBoostInt1() const {
    return ancestralBoostINT;
}

void Elf::setAncestralBoostInt1(int ancestralBoostInt) {
    ancestralBoostINT = ancestralBoostInt;
}

const std::string &Elf::getSize1() const {
    return size;
}

void Elf::setSize1(const std::string &size) {
    Elf::size = size;
}

const std::vector<std::string> &Elf::getType1() const {
    return type;
}

void Elf::setType1(const std::vector<std::string> &type) {
    Elf::type = type;
}

const std::vector<std::string> &Elf::getLanguages1() const {
    return languages;
}

void Elf::setLanguages1(const std::vector<std::string> &languages) {
    Elf::languages = languages;
}

const std::vector<std::string> &Elf::getValidLanguages() const {
    return validLanguages;
}

void Elf::setValidLanguages(const std::vector<std::string> &validLanguages) {
    Elf::validLanguages = validLanguages;
}

const std::vector<std::string> &Elf::getImmunities() const {
    return immunities;
}

void Elf::setImmunities(const std::vector<std::string> &immunities) {
    Elf::immunities = immunities;
}

const std::string &Elf::getVisionType1() const {
    return visionType;
}

void Elf::setVisionType1(const std::string &visionType) {
    Elf::visionType = visionType;
}
