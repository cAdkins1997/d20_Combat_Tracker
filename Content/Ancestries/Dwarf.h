//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_DWARF_H
#define D20_COMBAT_TRACKER_DWARF_H


#include <string>
#include <vector>
#include "Ancestries.h"


class Dwarf : public Ancestries {
protected:
    std::string ancestryName = "Dwarf";
    int initialHitPoints = 10;
    int speed = 20;
    int ancestralBoostCON = 2;
    int ancestralBoostWIS = 2;
    int ancestralBoostCHA = -2;
    std::string size = "medium";
    std::vector<std::string>traits = {"Dwarf", "Humanoid"};
    std::vector<std::string>languages = {"Common", "Dwarven"};
    std::vector<std::string>validLanguages = {"Gnomish", "Jotun", "Gnoll", "Terran", "Goblin", "Orcish", "Undercommon"};
    std::string visionType = "Darkvision";

public:
    Dwarf();

    ~Dwarf();

public:
    virtual const std::string &getAncestryName() const;

    void setAncestryName(const std::string &ancestryName) override;

    int getInitialHitPoints() const override;

    void setInitialHitPoints(int initialHitPoints) override;

    int getSpeed() const override;

    void setSpeed(int speed) override;

    int getAncestralBoostStr() const override;

    void setAncestralBoostStr(int ancestralBoostStr) override;

    int getAncestralBoostDex() const override;

    void setAncestralBoostDex(int ancestralBoostDex) override;

    int getAncestralBoostCon() const override;

    void setAncestralBoostCon(int ancestralBoostCon) override;

    int getAncestralBoostInt() const override;

    void setAncestralBoostInt(int ancestralBoostInt) override;

    int getAncestralBoostWis() const override;

    void setAncestralBoostWis(int ancestralBoostWis) override;

    int getAncestralBoostCha() const override;

    void setAncestralBoostCha(int ancestralBoostCha) override;

    int getAncestralAbilityBoosts() const override;

    void setAncestralAbilityBoosts(int ancestralAbilityBoosts) override;

    int getAncestralBonusFeats() const override;

    void setAncestralBonusFeats(int ancestralBonusFeats) override;

    const std::string &getSize() const;

    void setSize(const std::string &size) override;

    const std::vector<std::string> &getType() const;

    void setType(const std::vector<std::string> &type) override;

    const std::vector<std::string> &getLanguages() const;

    void setLanguages(const std::vector<std::string> &languages) override;

    const std::vector<std::string> &getValidLanguages() const;

    void setValidLanguages(const std::vector<std::string> &validLanguages) override;

    const std::vector<std::string> &getImmunities() const;

    void setImmunities(const std::vector<std::string> &immunities) override;

    int getAncestralBoostLang() const override;

    void setAncestralBoostLang(int ancestralBoostLang) override;

    const std::string &getVisionType() const;

    void setVisionType(const std::string &visionType) override;

};


#endif //D20_COMBAT_TRACKER_DWARF_H
