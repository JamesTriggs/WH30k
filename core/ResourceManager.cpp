#include "ResourceManager.h"
#include <string>
#include <map>
#include <fstream>

ResourceManager :: ResourceManager(){}

std::string ResourceManager::getTextResource(const std::string& resourceName) {
	if (cache.find(resourceName) == cache.end()) {
		loadText(resourceName);
	}
	return cache[resourceName];
}

void ResourceManager::loadText(const std::string& resourceName) {
	std::ifstream file("resources/text/" + resourceName + ".txt");
	std::string content;
	std::string line;

	while (std::getline(file, line)) {
		content += line + '\n';
	}

	cache[resourceName] = content;

}

ResourceManager& ResourceManager::getInstance() {
	static ResourceManager instance;  // Created only once
	return instance;
}