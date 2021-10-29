#include "../function.h"
#define CATCH_CONFIG_MAIN
#include "../catch/catch.hpp"

TEST_CASE("Test Amount")
{
    bool expected = true;
    REQUIRE(check_number_match(2, 100) == expected);
}

TEST_CASE("Test Difference")
{
    bool expected = true;
    REQUIRE(check_number_match(10, 100) == expected);
}

TEST_CASE("Test Multiplication")
{
    bool expected = false;
    REQUIRE(check_number_match(15, 100) == expected);
}