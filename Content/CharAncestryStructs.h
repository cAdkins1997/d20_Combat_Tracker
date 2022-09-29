//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_CHARANCESTRYSTRUCTS_H
#define D20_COMBAT_TRACKER_CHARANCESTRYSTRUCTS_H

#include <string>
#include <vector>

struct Human {
    int initialHitPoints = 8;
    int speed = 25;
    int ancestralBoostSTR = 0;
    int ancestralBoostDEX = 0;
    int ancestralBoostCON = 0;
    int ancestralBoostINT = 0;
    int ancestralBoostWIS = 0;
    int ancestralBoostCHA = 0;
    int ancestralAbilityBoosts = 2;
    std::string size = "medium";
    std::vector<std::string>traits = {"Human", "Humanoid"};
    std::vector<std::string>languages = {"Common"};
    int ancestralBoostLang = 1;
    std::string visionType = "Normal";
};

struct Elf{
    int initialHitPoints = 6;
    int speed = 30;
    int ancestralBoostSTR = 0;
    int ancestralBoostDEX = 2;
    int ancestralBoostCON = -2;
    int ancestralBoostINT = 2;
    int ancestralBoostWIS = 0;
    int ancestralBoostCHA = 0;
    int ancestralAbilityBoosts = 1;
    std::string size = "medium";
    std::vector<std::string>traits = {"Elf", "Humanoid"};
    std::vector<std::string>languages = {"Common", "Elf"};
    std::vector<std::string>validLanguages = {"Celestial", "Draconic", "Gnoll", "Gnomish", "Goblin", "Orcish", "Sylvan"};
    std::string visionType = "Low-Light";
    int ancestralBoostLang = 0;

};

struct Dwarf{
    int initialHitPoints = 10;
    int speed = 20;
    int ancestralBoostSTR = 0;
    int ancestralBoostDEX = 0;
    int ancestralBoostCON = 2;
    int ancestralBoostINT = 0;
    int ancestralBoostWIS = 2;
    int ancestralBoostCHA = -2;
    int ancestralAbilityBoosts = 1;
    std::string size = "medium";
    std::vector<std::string>traits = {"Dwarf", "Humanoid"};
    std::vector<std::string>languages = {"Common", "Dwarven"};
    std::vector<std::string>validLanguages = {"Gnomish", "Jotun", "Gnoll", "Terran", "Goblin", "Orcish", "Undercommon"};
    std::string visionType = "Darkvision";
    int ancestralBoostLang = 0;
};

#endif //D20_COMBAT_TRACKER_CHARANCESTRYSTRUCTS_H
