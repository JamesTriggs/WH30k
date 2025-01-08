# WH30K Text-Based RPG

A text-based RPG set in the Warhammer 30,000 universe, following an Imperial Army soldier discovering corruption aboard a Word Bearers vessel. This project serves as a C++ learning exercise, implementing game mechanics while exploring modern C++ practices.

## Project Overview

- Text-based adventure game using C++
- Setting: Horus Heresy era (Warhammer 30K)
- Development focus: Learning C++ through practical application
- Project structure follows a ticket-based development approach

## Development Environment

- Windows 11
- Visual Studio 2022
- C++17
- Git Bash for version control

## Project Structure

```cpp
WH30K_RPG/
├── character/     # Character-related classes and logic
├── world/        # World and location management
├── game/         # Core game mechanics
├── core/         # Core systems (Resource management, etc.)
└── resources/    # Text resources and game content
```

## Getting Started

1. Clone the repository
2. Open the solution in Visual Studio 2022
3. Build and run the project

## Development Guidelines

### Branch Strategy
- Main branch contains stable releases
- Feature branches follow the pattern: `WH30K-<ticket-number>-brief-description`
- All development work should reference a JIRA ticket

### Coding Conventions
- Each class has its own header (.h) and implementation (.cpp) files
- Header files use pragma once
- Class names are PascalCase
- Member variables are camelCase

## Learning Journey

This project is part of a C++ learning journey, implementing game systems while exploring:
- Modern C++ practices
- Object-oriented design
- Memory management
- STL usage
- Design patterns

## Note

This is a personal learning project using Warhammer 30K IP for educational purposes only.