#ifndef USER_USER_H_
#define USER_USER_H_

#include <string>

class User {
    private:
        int id; // unique 0-255 value
        std::string m_name; // unique name of user
        int cartel[3]{0, 0, 0}; // 0: Wins, 1: Draws, 2: losts

    public:
        User(int id);
        User(std::string name);

        int getId();
        std::string getName();

        void addUser(std::string name);
};

#endif // USER_USER_H_