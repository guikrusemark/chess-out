#ifndef _PIECE_H_
#define _PIECE_H_

#include <string>

class Piece {
private:
    const std::string name;
public:
    Piece();
    ~Piece();

    virtual void setName(const std::string &name) = 0;
    std::string getName();
};

#endif // _PIECE_H_