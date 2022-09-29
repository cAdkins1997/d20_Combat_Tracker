//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_ELF_H
#define D20_COMBAT_TRACKER_ELF_H


#include "Ancestry.h"

class Elf : Ancestry {
protected:
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
    ~Elf() override;

    int getInitialHitPoints1() const;

    void setInitialHitPoints1(int initialHitPoints);

    int getSpeed1() const;

    void setSpeed1(int speed);

    int getAncestralBoostDex1() const;

    void setAncestralBoostDex1(int ancestralBoostDex);

    int getAncestralBoostCon1() const;

    void setAncestralBoostCon1(int ancestralBoostCon);

    int getAncestralBoostInt1() const;

    void setAncestralBoostInt1(int ancestralBoostInt);

    const std::string &getSize1() const;

    void setSize1(const std::string &size);

    const std::vector<std::string> &getType1() const;

    void setType1(const std::vector<std::string> &type);

    const std::vector<std::string> &getLanguages1() const;

    void setLanguages1(const std::vector<std::string> &languages);

    const std::vector<std::string> &getValidLanguages() const;

    void setValidLanguages(const std::vector<std::string> &validLanguages);

    const std::vector<std::string> &getImmunities() const;

    void setImmunities(const std::vector<std::string> &immunities);

    const std::string &getVisionType1() const;

    void setVisionType1(const std::string &visionType);

};


#endif //D20_COMBAT_TRACKER_ELF_H
