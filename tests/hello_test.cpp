#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("Second string greater") {
    REQUIRE(str_cmp_case_insensitive("String one", "string two") == -1);
}

TEST_CASE("Strings equal") {
    REQUIRE(str_cmp_case_insensitive("String one", "string one") == 0);
}

TEST_CASE("First string greater") {
    REQUIRE(str_cmp_case_insensitive("String two", "string one") == 1);
}