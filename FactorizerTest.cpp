#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Factorizer.h"

TEST_CASE("Returns empty for numbers <= 1") {
    Factorizer f;

    REQUIRE(f.getPrimeFactors(1).empty());
    REQUIRE(f.getPrimeFactors(0).empty());
    REQUIRE(f.getPrimeFactors(-5).empty());
}

TEST_CASE("Prime number returns itself") {
    Factorizer f;
    auto result = f.getPrimeFactors(7);

    REQUIRE(result.size() == 1);
    REQUIRE(result[0] == 7);
}

TEST_CASE("Composite number factors correctly") {
    Factorizer f;
    auto result = f.getPrimeFactors(12);

    REQUIRE(result.size() == 3);
    REQUIRE(result[0] == 2);
    REQUIRE(result[1] == 2);
    REQUIRE(result[2] == 3);
}