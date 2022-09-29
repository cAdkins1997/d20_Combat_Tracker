//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_HUMAN_H
#define D20_COMBAT_TRACKER_HUMAN_H


#include "Ancestry.h"

class Human : public Ancestry  {
protected:
    std::string ancestryName = "Human";
    int initialHitPoints = 8;
    int speed = 30;
    int ancestralAbilityBoosts = 1;
    int ancestralBonusFeats = 1;
    std::string size = "medium";
    std::vector<std::string>type = {"Human", "Humanoid"};
    std::vector<std::string>languages = {"Common"};
    int ancestralBoostLang = 1;
    std::string visionType = "Normal";

public:
    Human();

    ~Human() override;
};


#endif //D20_COMBAT_TRACKER_HUMAN_H
