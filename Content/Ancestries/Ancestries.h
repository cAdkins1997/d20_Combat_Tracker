//
// Created by ulver on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_ANCESTRIES_H
#define D20_COMBAT_TRACKER_ANCESTRIES_H


#include <string>
#include <vector>

class Ancestries {
protected:
    std::string playerName{};
    std::string chaName{};
    std::string ancestryName{};
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
    std::string size = {};
    std::vector<std::string>type = {};
    std::vector<std::string>languages = {};
    std::vector<std::string>validLanguages{};
    std::vector<std::string>immunities{};
    int ancestralBoostLang{};
    std::string visionType{};

public:
    Ancestries();

    virtual ~Ancestries();

public:
    virtual const std::string &getAncestryName() const;

    virtual void setAncestryName(const std::string &ancestryName);

    virtual int getInitialHitPoints() const;

    virtual void setInitialHitPoints(int initialHitPoints);

    virtual int getSpeed() const;

    virtual void setSpeed(int speed);

    virtual int getAncestralBoostStr() const;

    virtual void setAncestralBoostStr(int ancestralBoostStr);

    virtual int getAncestralBoostDex() const;

    virtual void setAncestralBoostDex(int ancestralBoostDex);

    virtual int getAncestralBoostCon() const;

    virtual void setAncestralBoostCon(int ancestralBoostCon);

    virtual int getAncestralBoostInt() const;

    virtual void setAncestralBoostInt(int ancestralBoostInt);

    virtual int getAncestralBoostWis() const;

    virtual void setAncestralBoostWis(int ancestralBoostWis);

    virtual int getAncestralBoostCha() const;

    virtual void setAncestralBoostCha(int ancestralBoostCha);

    virtual int getAncestralAbilityBoosts() const;

    virtual void setAncestralAbilityBoosts(int ancestralAbilityBoosts);

    virtual int getAncestralBonusFeats() const;

    virtual void setAncestralBonusFeats(int ancestralBonusFeats);

    virtual const std::string &getSize() const;

    virtual void setSize(const std::string &size);

    virtual const std::vector<std::string> &getType() const;

    virtual void setType(const std::vector<std::string> &type);

    virtual const std::vector<std::string> &getLanguages() const;

    virtual void setLanguages(const std::vector<std::string> &languages);

    virtual const std::vector<std::string> &getValidLanguages() const;

    virtual void setValidLanguages(const std::vector<std::string> &validLanguages);

    virtual const std::vector<std::string> &getImmunities() const;

    virtual void setImmunities(const std::vector<std::string> &immunities);

    virtual int getAncestralBoostLang() const;

    virtual void setAncestralBoostLang(int ancestralBoostLang);

    virtual const std::string &getVisionType() const;

    virtual void setVisionType(const std::string &visionType);
};


#endif //D20_COMBAT_TRACKER_ANCESTRIES_H
