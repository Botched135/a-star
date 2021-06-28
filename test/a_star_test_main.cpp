//
// Created by rbo on 28/06/2021.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "derp.hpp"


TEST_CASE("Sanity")
{
    CHECK(herp(3) == 3*3*3);
}