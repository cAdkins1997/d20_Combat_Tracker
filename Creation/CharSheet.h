//C
// Created by cAdkins on 9/29/2022.
//

#ifndef D20_COMBAT_TRACKER_CHARSHEET_H
#define D20_COMBAT_TRACKER_CHARSHEET_H


#include <string>
#include "selectionEnums.h"

class CharSheet {
protected:
    std::string playerName;
    std::string characterName;

    ClassesEnum charClass = ClassErr;

public:
    CharSheet();

    virtual ~CharSheet();

public:
    const std::string &getPlayerName();

    void setPlayerName(const std::string &playerName);

    const std::string &getCharacterName();

    void setCharacterName(const std::string &characterName);

    ClassesEnum getCharClass() ;

    void setCharClass(ClassesEnum charClass);
};


#endif //D20_COMBAT_TRACKER_CHARSHEET_H
