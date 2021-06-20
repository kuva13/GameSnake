#include <cassert>
#include "lib.hpp"
#include <numeric>
#include <doctest.h>


int PlayTest() {
    Play game;

    CHECK(p(2,3) == 6);
}

int MainTest() {
    main m;
    CHECK(f(2,3) == 6);
}

int DelayTest() {
    int i = 0, j = 12;
    int actual = i * j;
    int a = assert::DelayTest(0, actual);
    CHECK_FALSE(a != a);
}
