/*
Adam Mashhadani
2/22/2026
Project: It's Raining Strings Lab
*/

#define CATCH_CONFIG_MAIN    // Catch2 generates main() automatically
#include "catch_amalgamated.hpp" // Make sure this file is in the same folder
#include "Business.h"

#include <vector>  // needed for std::vector
#include <string>  // needed for std::string

TEST_CASE("Add business names and sort them") {
    std::vector<std::string> businesses;

    addBusiness(businesses, "WalMart");
    REQUIRE(businesses[0] == "WalMart");

    addBusiness(businesses, "JC Penney");
    REQUIRE(businesses[0] == "JC Penney");  // sorted alphabetically
    REQUIRE(businesses[1] == "WalMart");

    addBusiness(businesses, "Appleby's");
    REQUIRE(businesses[0] == "Appleby's");  // new alphabetical order
    REQUIRE(businesses[1] == "JC Penney");
    REQUIRE(businesses[2] == "WalMart");
}