//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_ANCESTRY_H
#define D20_COMBAT_TRACKER_ANCESTRY_H


#include <string>
#include <vector>

class Ancestry {

public:
    Ancestry();

    virtual ~Ancestry();

    const std::string &getAncestryName() const;

    void setAncestryName(const std::string &ancestryName);

    int getInitialHitPoints() const;

    void setInitialHitPoints(int initialHitPoints);

    int getSpeed() const;

    void setSpeed(int speed);

    int getAncestralBoostStr() const;

    void setAncestralBoostStr(int ancestralBoostStr);

    int getAncestralBoostDex() const;

    void setAncestralBoostDex(int ancestralBoostDex);

    int getAncestralBoostCon() const;

    void setAncestralBoostCon(int ancestralBoostCon);

    int getAncestralBoostInt() const;

    void setAncestralBoostInt(int ancestralBoostInt);

    int getAncestralBoostWis() const;

    void setAncestralBoostWis(int ancestralBoostWis);

    int getAncestralBoostCha() const;

    void setAncestralBoostCha(int ancestralBoostCha);

    int getAncestralAbilityBoosts() const;

    void setAncestralAbilityBoosts(int ancestralAbilityBoosts);

    int getAncestralBonusFeats() const;

    void setAncestralBonusFeats(int ancestralBonusFeats);

    const std::string &getSize() const;

    void setSize(const std::string &size);

    const std::vector<std::string> &getType() const;

    void setType(const std::vector<std::string> &type);

    const std::vector<std::string> &getLanguages() const;

    void setLanguages(const std::vector<std::string> &languages);

    int getAncestralBoostLang() const;

    void setAncestralBoostLang(int ancestralBoostLang);

    const std::string &getVisionType() const;

    void setVisionType(const std::string &visionType);

protected:
    std::string ancestryName;
    int initialHitPoints{};
    int speed{};
    int ancestralBoostSTR{};
    int ancestralBoostDEX{};
    int ancestralBoostCON{};
    int ancestralBoostINT{};
    int ancestralBoostWIS{};
    int ancestralBoostCHA{};
    int ancestralAbilityBoosts{};
    int ancestralBonusFeats{};
    std::string size;
    std::vector<std::string>type;
    std::vector<std::string>languages;
    int ancestralBoostLang{};
    std::string visionType;
};


#endif //D20_COMBAT_TRACKER_ANCESTRY_H
