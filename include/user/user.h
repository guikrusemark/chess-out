/**
 * @file user.h
 * @author 
 * @brief Class User is a superset o player which will ideally be used to handle only real players
 * 
 */

#ifndef USER_USER_H_
#define USER_USER_H_

#include <string>
#include <cmath>

class User {
    private:
        int m_id{0}; // unique value
        std::string m_name{"anon"}; // unique one word name
        int m_cartel[3]{0, 0, 0}; // 0: Wins, 1: Draws, 2: losts
        int m_abandonmentCount{0};  // number of times the user abandonment a match

    public:
        User(); // Anon random player
        User(User &user); // Copy constructor
        User(int id, std::string name); // constructor will search firstly for an existing user with same unique infos, if not found, will create a new one

        const int getId();
        const std::string getName();
        int& getCartel();
        const int getAbandonmentCount();
};

#endif // USER_USER_H_