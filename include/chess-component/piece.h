#ifndef _PIECE_H_
#define _PIECE_H_

#include <string>
#include <vector>

class Piece {
private:
    const std::string m_name;
    const std::string m_symbol;
    const std::string m_color;

public:
    Piece();
    ~Piece();

    virtual void setName(const std::string &name) = 0;
    std::string getName();

    virtual void move(uint8_t side) = 0;
    virtual void capture() = 0;
    virtual std::vector<std::string *> getMoves() = 0;
};

#endif // _PIECE_H_