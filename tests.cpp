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

TEST_CASE( "Three numbers, delimited either way, returns the sum" ) {
    REQUIRE( stringCalculate("4, 7\n9") == 20);
    REQUIRE( stringCalculate("23\n5, 11") == 39);
    REQUIRE( stringCalculate("4, 7, 9") == 20);
    REQUIRE( stringCalculate("23\n5\n11") == 39);
}

TEST_CASE( "Negative numbers throw an exception" ) {
    REQUIRE_THROWS_AS( stringCalculate("-1"), IllegalArgumentException);
    REQUIRE_THROWS_AS( stringCalculate("-12"), IllegalArgumentException);
}