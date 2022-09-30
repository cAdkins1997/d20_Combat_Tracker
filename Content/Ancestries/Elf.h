//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_ELF_H
#define D20_COMBAT_TRACKER_ELF_H

#include <string>
#include <vector>
#include "Ancestries.h"

class Elf : public Ancestries  {
protected:
    std::string ancestryName = "Elf";
    int initialHitPoints = 6;
    int speed = 30;
    int ancestralBoostDEX = 2;
    int ancestralBoostCON = -2;
    int ancestralBoostINT = 2;
    std::string size = "medium";
    std::vector<std::string>type = {"Elf", "Humanoid"};
    std::vector<std::string>languages = {"Common", "Elf"};
    std::vector<std::string>validLanguages = {"Celestial", "Draconic", "Gnoll", "Gnomish", "Goblin", "Orcish", "Sylvan"};
    std::vector<std::string>immunities = {"sleep"};
    std::string visionType = "Low-Light";

public:
    Elf();
    ~Elf();

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


#endif //D20_COMBAT_TRACKER_ELF_H
