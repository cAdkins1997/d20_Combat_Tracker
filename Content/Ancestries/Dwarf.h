//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_DWARF_H
#define D20_COMBAT_TRACKER_DWARF_H


#include "Ancestry.h"

class Dwarf : public Ancestry {
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

    ~Dwarf() override;

    int getInitialHitPoints1() const;

    void setInitialHitPoints1(int initialHitPoints);

    int getSpeed1() const;

    void setSpeed1(int speed);

    int getAncestralBoostCon1() const;

    void setAncestralBoostCon1(int ancestralBoostCon);

    int getAncestralBoostWis1() const;

    void setAncestralBoostWis1(int ancestralBoostWis);

    int getAncestralBoostCha1() const;

    void setAncestralBoostCha1(int ancestralBoostCha);

    const std::string &getSize1() const;

    void setSize1(const std::string &size);

    const std::vector<std::string> &getTraits() const;

    void setTraits(const std::vector<std::string> &traits);

    const std::vector<std::string> &getLanguages1() const;

    void setLanguages1(const std::vector<std::string> &languages);

    const std::vector<std::string> &getValidLanguages() const;

    void setValidLanguages(const std::vector<std::string> &validLanguages);

    const std::string &getVisionType1() const;

    void setVisionType1(const std::string &visionType);

};


#endif //D20_COMBAT_TRACKER_DWARF_H
