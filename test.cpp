#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("MULTIPLES OF N UP TO M ARE CALCULATED IN A VECTOR", "[Multiples]") {
    std::vector<int> oneThree;
    oneThree.push_back(1);
    oneThree.push_back(2);
    oneThree.push_back(3);
    REQUIRE(functions_to_implement::Multiples(1,3) == oneThree);
}