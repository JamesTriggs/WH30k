#include "Game.h"
#include <iostream>
#include "../core/ResourceManager.h"
#include "../character/Player.h"
#include "../character/Background.h"

Game::Game() : isRunning(false) {}

void Game::start() {
    std::cout << "Dark clouds gather in the void...\n";
    std::cout << "Aboard the Word Bearers vessel 'Truthbearer'...\n";

    createCharacter();

    isRunning = true;
    while (isRunning) {
        std::string command;
        std::cout << "\nWhat would you like to do? ";
        std::getline(std::cin, command);
        processCommand(command);
    }
}

void Game::processCommand(const std::string& command) {
    // TODO: Implement command processing
    if (command == "quit") {
        isRunning = false;
    }
}

void Game::createCharacter() {

    Background chosenBackground;
    std::string name;
    std::cout << "Lets start with your name: " << '\n';
    std::cin >> name;
    std::cout << "Time to choose your background..." << '\n';

    try {
        auto& rm = ResourceManager::getInstance();
        std::string veteranText = rm.getTextResource("backgrounds/veteran");
        std::string techAdeptText = rm.getTextResource("backgrounds/tech_adept");
        std::string investigatorText = rm.getTextResource("backgrounds/investigator");
        std::string medicaeText = rm.getTextResource("backgrounds/medicae");
        std::string navalOfficerText = rm.getTextResource("backgrounds/naval_officer");

        std::cout << "Veteran Background:\n" << veteranText << "\n";
        std::cout << "Tech Adept Background:\n" << techAdeptText << "\n";
        std::cout << "Investigator Background:\n" << investigatorText << "\n";
        std::cout << "Naval Officer Background:\n" << navalOfficerText << "\n";
        std::cout << "Medicae Background:\n" << medicaeText << "\n";
    }
    catch (const std::exception& e) {
        std::cout << "Error loading resource: " << e.what() << "\n";
    }

    int choice;
    std::cout << "Enter the number of your chosen background: " << '\n';
    std::cout << "1: Veteran" << '\n';
    std::cout << "2: Tech Adept" << '\n';
    std::cout << "3: Investigator" << '\n';
    std::cout << "4: Naval Officer" << '\n';
    std::cout << "5: Medicae" << '\n';
    
    std::cin >> choice;

    // Convert choice to Background enum
    switch (choice) {
    case 1:
        chosenBackground = Background::Veteran;
        break;
    case 2:
        chosenBackground = Background::TechAdept;
        break;
    case 3:
        chosenBackground = Background::Investigator;
        break;
    case 4:
        chosenBackground = Background::NavalOfficer;
        break;
    case 5:
        chosenBackground = Background::Medicae;
        break;
    default:
        std::cout << "Invalid choice, defaulting to Veteran\n";
        chosenBackground = Background::Veteran;
    }

    // Create player with chosen background
    player = Player(chosenBackground);
    player.setName(name);
}