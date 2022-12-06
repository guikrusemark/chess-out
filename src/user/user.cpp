#include "user/user.h"

User::User() {};
User::User(User &user) 
    : m_id(user.m_id), m_name(user.m_name), m_abandoments(user.m_abandoments) {
        for (int itr : user.m_cartel) {
            m_cartel[itr] = user.m_cartel[itr];
        }
    };
User::User(int id, std::string name) 
    : m_id(id), m_name(name) {};

const int User::getId() { return m_id; };
const std::string User::getName() { return m_name; };
int& User::getCartel() { return *m_cartel; };
const int User::getAbandoments() { return m_abandoments; };