#pragma once
#include <string>
#include "Background.h"

class Player {
private:
    std::string name;
    int health;
    int sanity;  // For tracking exposure to corruption
    Background background;

public:
    Player();
    Player(Background chosenBackground);
    void setName(const std::string& newName) { name = newName; }
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    int getSanity() const { return sanity; }
    Background getBackground() const { return background; }
    void setBackground(Background chosenBackground) { background = chosenBackground; }
};