#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {
private:
    std::string m_name;

public:
    Player();
    ~Player();

    void setName(const std::string &name);
    std::string getName();
};

#endif // _PLAYER_H_