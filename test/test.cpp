#include "../100math.h"
#define CATCH_CONFIG_MAIN
#include "../catch/catch.hpp"

TEST_CASE("Test Amount")
{
    REQUIRE(check_number_match(2, 100) == true);
}

TEST_CASE("Test Difference")
{
    REQUIRE(check_number_match(10, 100) == true);
}

TEST_CASE("Test Multiplication")
{
    REQUIRE(check_number_match(15, 100) == false);
}