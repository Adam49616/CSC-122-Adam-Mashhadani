/*
Adam Mashhadani
2/22/2026
Project: It's Raining Strings Lab
*/

#include <vector>    // for std::vector
#include <string>    // for std::string
#include <algorithm> // for std::sort

void addBusiness(std::vector<std::string>& businesses, const std::string& name) {
    businesses.push_back(name);
    std::sort(businesses.begin(), businesses.end());
}