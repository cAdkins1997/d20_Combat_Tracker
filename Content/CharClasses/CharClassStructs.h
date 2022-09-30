//
// Created by ulver on 9/29/2022.
//

#include <vector>
#include <string>

#ifndef D20_COMBAT_TRACKER_CHARCLASSENUMS_H
#define D20_COMBAT_TRACKER_CHARCLASSENUMS_H

struct Ranger {
    int hitPointsPerLevel = 10;
    std::vector<std::string> initialClassAbilityBoosts = {"Strength", "Dexterity"};
    std::vector<int> fortitudeProfVector = {4};
    std::vector<int> reflexProfVector = {4};
    std::vector<int> willProfVector = {2};
    bool trainLightArmour = true;
    bool trainMediumArmour = true;
    bool trainHeavyArmour = false;
    bool trainUnarmoredDef = true;
};

struct Rogue {
    int hitPointsPerLevel = 8;
    std::vector<std::string> initialClassAbilityBoosts = {"Dexterity", "Other"};
    std::vector<int> fortitudeProfVector = {2};
    std::vector<int> reflexProfVector = {4};
    std::vector<int> willProfVector = {4};
    bool trainLightArmour = true;
    bool trainMediumArmour = false;
    bool trainHeavyArmour = false;
    bool trainUnarmoredDef = true;
};

struct Fighter {
    int hitPointsPerLevel = 10;
    std::vector<std::string> initialClassAbilityBoosts = {"Strength", "Dexterity"};
    std::vector<int> fortitudeProfVector = {4};
    std::vector<int> reflexProfVector = {4};
    std::vector<int> willProfVector = {2};
    bool trainLightArmour = true;
    bool trainMediumArmour = true;
    bool trainHeavyArmour = true;
    bool trainUnarmoredDef = true;
};

#endif //D20_COMBAT_TRACKER_CHARCLASSENUMS_H