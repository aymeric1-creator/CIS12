#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Player.h"

int main() {
    std::ifstream file("players.csv");
    if (!file.is_open()) {
        std::cerr << "Failed to open file.\n";
        return 1;
    }

    std::vector<Player> players;
    std::string line;
    getline(file, line); // Skip header line

    int count = 0;
    while (getline(file, line) && count < 10) {
        std::stringstream ss(line);
        std::string name, ageStr, nationality, club, valueStr;

        getline(ss, name, ',');
        getline(ss, ageStr, ',');
        getline(ss, nationality, ',');
        getline(ss, club, ',');
        getline(ss, valueStr, ',');

        int age = std::stoi(ageStr);
        long value = std::stol(valueStr);

        players.emplace_back(name, age, nationality, club, value);
        count++;
    }

    for (const Player& p : players)
        p.display();

    file.close();
    return 0;
}