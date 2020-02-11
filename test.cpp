#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE("MULTIPLES OF N UP TO M ARE CALCULATED IN A VECTOR", "[Multiples]") {
    std::vector<int> oneThree;
    oneThree.push_back(1);
    oneThree.push_back(2);
    oneThree.push_back(3);
    REQUIRE(functions_to_implement::Multiples(1,3) == oneThree);
}