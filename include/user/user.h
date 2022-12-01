/**
 * @file user.h
 * @author 
 * @brief Class User is a superset o player which will ideally be used to handle only real players
 * 
 */

#ifndef USER_USER_H_
#define USER_USER_H_

#include <string>

class User {
    private:
        static int m_id; // unique value
        std::string m_name{"anon"}; // unique one word name
        int m_cartel[3]{0, 0, 0}; // 0: Wins, 1: Draws, 2: losts

    public:
        User(int id, std::string name);
        User(int id, std::string name, int cartel[3]);

        int getId();
        std::string getName();
};

#endif // USER_USER_H_