#pragma once
#include <string>

// find character in string
int find(const std::string& text, char ch);

// find substring in string (overloaded)
int find(const std::string& text, const std::string& sub);
