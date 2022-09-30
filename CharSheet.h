//C
// Created by cAdkins on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_CHARSHEET_H
#define D20_COMBAT_TRACKER_CHARSHEET_H


#include <string>
#include "Content/Ancestries/Ancestries.h"

class CharSheet {
protected:
    std::string playerName;
    std::string characterName;

    std::string charClass;
    std::string charAncestry;

public:
    CharSheet();

    virtual ~CharSheet();

public:
    const std::string &getPlayerName() const;

    void setPlayerName(const std::string &playerName);

    const std::string &getCharacterName() const;

    void setCharacterName(const std::string &characterName);

    const std::string &getCharClass() const;

    void setCharClass(const std::string &charClass);

    const std::string &getCharAncestry() const;

    void setCharAncestry(const std::string &charAncestry);
};


#endif //D20_COMBAT_TRACKER_CHARSHEET_H
