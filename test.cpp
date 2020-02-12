#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int Factorial(int n){
	int fact = 1;
	for (int i = 1; i <= n; i++){
		fact = fact * i;
	}
	return fact;
}

std::vector<int> Multiples(int n, int m) {
    std::vector<int> multiple;
    for(int y = 1; y <= m; y++) {
        multiple.push_back(n*y);
    }
    return multiple;
}

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
    REQUIRE(Multiples(1,3) == oneThree);
}