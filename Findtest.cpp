/*
Adam Mashhadani
2/22/2026
Project: Now Where Did I put That Lab
*/

#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"
#include "Find.h"
#include <string>

using std::string;

TEST_CASE("Find character in string") {
    string text = "The quick brown fox";
    REQUIRE(find(text, 'T') == 0);
    REQUIRE(find(text, 'e') == 2);
    REQUIRE(find(text, 'z') == -1);
}

TEST_CASE("Find substring in string") {
    string text = "The quick brown fox";
    REQUIRE(find(text, "quick") == 4);
    REQUIRE(find(text, "lazy") == -1);
    REQUIRE(find(text, "") == 0);
}