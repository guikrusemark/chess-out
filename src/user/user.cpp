#include "user/user.h"

User::User() {
    m_id = (std::rand() % 100);
    m_name = "Magnus Carlsen";
    m_cartel[0] = (std::rand() % 100);
    m_cartel[1] = (std::rand() % 10);
    m_cartel[2] = (std::rand() % 50);
    m_abandonmentCount = (std::rand() % 10);
};
User::User(User &user)
    : m_id(user.m_id), m_name(user.m_name), m_abandonmentCount(user.m_abandonmentCount) {
    for (int itr : user.m_cartel) {
        m_cartel[itr] = user.m_cartel[itr];
    }
};
User::User(int id, std::string name)
    : m_id(id), m_name(name) {
    m_cartel[0] = (std::rand() % 100);
    m_cartel[1] = (std::rand() % 10);
    m_cartel[2] = (std::rand() % 50);
    m_abandonmentCount = (std::rand() % 10);
};

const int User::getId() { return m_id; };
const std::string User::getName() { return m_name; };
int& User::getCartel() { return *m_cartel; };
const int User::getAbandonmentCount() { return m_abandonmentCount; };