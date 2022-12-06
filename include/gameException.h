/**
 * @file gameException.h
 * @author
 * @brief Sub class of std::exception to handle errors in the curse of game
 * 
 */

// TODECIDE - Should we use multiple Exception classes in multiple files or just one in one file?
// TODECIDE - Should we implement a custom exception class to treat most of error handling or just use std::exception for most of it?

#ifndef GAMEEXCEPTION_H_
#define GAMEEXCEPTION_H_

#include <exception>
#include <string>

class GameException : public std::exception {
    private:
        std::string m_message;

    public:
        GameException(std::string message);
        virtual const char* what() const throw();
};

#endif // GAMEEXCEPTION_H_