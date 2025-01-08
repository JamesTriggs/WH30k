#include "Player.h"

// Default constructor
Player::Player() : health(100), sanity(100), background(Background::Veteran) {}

// Background constructor
Player::Player(Background chosenBackground) : health(100), sanity(100), background(chosenBackground) {}