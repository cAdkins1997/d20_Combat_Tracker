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

    std::string charClass;
    std::string charAncestry;

public:
    CharSheet();

    virtual ~CharSheet();

public:

    const std::string &getCharacterClass() const;

    void setCharacterClass(const std::string &characterClass);

    const std::string &getCharAncestry() const;

    void setCharAncestry(const std::string &charAncestry);

    const std::string &getPlayerName();

    void setPlayerName(const std::string &playerName);

    const std::string &getCharacterName();

    void setCharacterName(const std::string &characterName);

    std::basic_string<char> getCharClass() ;

    void setCharClass(ClassesEnum charClass);
};


#endif //D20_COMBAT_TRACKER_CHARSHEET_H
