//
// Created by ulver on 9/29/2022.
//

#include "Dwarf.h"

Dwarf::Dwarf() = default;

Dwarf::~Dwarf() = default;

int Dwarf::getInitialHitPoints1() const {
    return initialHitPoints;
}

void Dwarf::setInitialHitPoints1(int initialHitPoints) {
    Dwarf::initialHitPoints = initialHitPoints;
}

int Dwarf::getSpeed1() const {
    return speed;
}

void Dwarf::setSpeed1(int speed) {
    Dwarf::speed = speed;
}

int Dwarf::getAncestralBoostCon1() const {
    return ancestralBoostCON;
}

void Dwarf::setAncestralBoostCon1(int ancestralBoostCon) {
    ancestralBoostCON = ancestralBoostCon;
}

int Dwarf::getAncestralBoostWis1() const {
    return ancestralBoostWIS;
}

void Dwarf::setAncestralBoostWis1(int ancestralBoostWis) {
    ancestralBoostWIS = ancestralBoostWis;
}

int Dwarf::getAncestralBoostCha1() const {
    return ancestralBoostCHA;
}

void Dwarf::setAncestralBoostCha1(int ancestralBoostCha) {
    ancestralBoostCHA = ancestralBoostCha;
}

const std::string &Dwarf::getSize1() const {
    return size;
}

void Dwarf::setSize1(const std::string &size) {
    Dwarf::size = size;
}

const std::vector<std::string> &Dwarf::getTraits() const {
    return traits;
}

void Dwarf::setTraits(const std::vector<std::string> &traits) {
    Dwarf::traits = traits;
}

const std::vector<std::string> &Dwarf::getLanguages1() const {
    return languages;
}

void Dwarf::setLanguages1(const std::vector<std::string> &languages) {
    Dwarf::languages = languages;
}

const std::vector<std::string> &Dwarf::getValidLanguages() const {
    return validLanguages;
}

void Dwarf::setValidLanguages(const std::vector<std::string> &validLanguages) {
    Dwarf::validLanguages = validLanguages;
}

const std::string &Dwarf::getVisionType1() const {
    return visionType;
}

void Dwarf::setVisionType1(const std::string &visionType) {
    Dwarf::visionType = visionType;
}
