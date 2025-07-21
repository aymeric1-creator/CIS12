#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int age;
    std::string nationality;
    std::string club;
    long value;

public:
    Player(const std::string& name, int age, const std::string& nationality, const std::string& club, long value);
    void display() const;
};

#endif