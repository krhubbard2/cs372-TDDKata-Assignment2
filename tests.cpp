#include "catch.hpp"
#include "calculator.h"


TEST_CASE( "An empty string returns zero" ) {
    REQUIRE( stringCalculate("") == 0 );
}

TEST_CASE( "A single number returns the value" ) {
    REQUIRE( stringCalculate("6") == 6 );
    REQUIRE( stringCalculate("53") == 53);
}

TEST_CASE( "Two numbers, comma delimited, returns the sum" ) {
    REQUIRE( stringCalculate("1, 8") == 9);
    REQUIRE( stringCalculate("13, 20") == 33);
}

TEST_CASE( "Two numbers, newline delimited, returns the sum" ) {
    REQUIRE( stringCalculate("4\n12") == 16);
    REQUIRE( stringCalculate("13\n5") == 18);
}
