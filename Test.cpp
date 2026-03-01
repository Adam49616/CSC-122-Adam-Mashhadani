#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <sstream>
#include <iostream>
#include "validate.h"

TEST_CASE("Valid input on first try")
{
    std::istringstream input("25\n");
    std::ostringstream output;

    // Redirect cin and cout
    std::streambuf* cinBackup = std::cin.rdbuf(input.rdbuf());
    std::streambuf* coutBackup = std::cout.rdbuf(output.rdbuf());

    int result = getValidatedInt(0, 100,
        "Enter value:",
        "Invalid");

    // Restore cin and cout
    std::cin.rdbuf(cinBackup);
    std::cout.rdbuf(coutBackup);

    REQUIRE(result == 25);
}

TEST_CASE("Invalid input followed by valid input")
{
    std::istringstream input("-5\n150\n45\n");
    std::ostringstream output;

    std::streambuf* cinBackup = std::cin.rdbuf(input.rdbuf());
    std::streambuf* coutBackup = std::cout.rdbuf(output.rdbuf());

    int result = getValidatedInt(0, 100,
        "Enter value:",
        "Invalid");

    std::cin.rdbuf(cinBackup);
    std::cout.rdbuf(coutBackup);

    REQUIRE(result == 45);
}