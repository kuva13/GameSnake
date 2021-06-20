#include "catch.hpp"
#include "lib.hpp"

TEST_CASE("MoveSnakeTest") { REQUIRE(main() == main()); }

TEST_CASE("ControlTest") { REQUIRE(Play() == Play()); }

TEST_CASE("ControlTest") { REQUIRE(Delay() == Delay()); }