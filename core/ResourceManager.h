#pragma once
#include <string>
#include <map>

class ResourceManager {
private:
	ResourceManager();
	ResourceManager(const ResourceManager&) = delete;
	ResourceManager& operator=(const ResourceManager&) = delete;
	std::map<std::string, std::string> cache;
	void loadText(const std::string& resourceName);

public:
	static ResourceManager& getInstance();
	std::string getTextResource(const std::string& resourceName);
};