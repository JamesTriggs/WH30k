#pragma once
#include <string>
#include <vector>

class Location {
private:
    std::string name;
    std::string description;
    std::vector<std::string> exits;

public:
    Location();
    void setName(const std::string& newName) { name = newName; }
    std::string getName() const { return name; }
    void setDescription(const std::string& newDesc) { description = newDesc; }
    std::string getDescription() const { return description; }
};