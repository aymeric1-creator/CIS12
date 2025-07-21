#include "Player.h"
#include <iostream>

Player::Player(const std::string& name, int age, const std::string& nationality, const std::string& club, long value)
    : name(name), age(age), nationality(nationality), club(club), value(value) {}

void Player::display() const {
    std::cout << "Name: " << name
              << " | Age: " << age
              << " | Nationality: " << nationality
              << " | Club: " << club
              << " | Value: $" << value << "\n";
}