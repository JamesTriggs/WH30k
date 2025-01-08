#pragma once
#include <string>
#include "../character/Player.h"
#include "../world/Location.h"

class Game {
private:
    Player player;
    Location currentLocation;
    bool isRunning;

public:
    Game();
    void start();
    void processCommand(const std::string& command);
    bool getIsRunning() const { return isRunning; }
    void createCharacter();
};