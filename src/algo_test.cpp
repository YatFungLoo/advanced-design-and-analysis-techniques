#include "algo.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
TEST(cutRodTest, BasicAssertions) {
    const std::array<Rod, NUM_LENGTH> data{{
        {0, 0},
        {1, 1},
        {2, 5},
        {3, 8},
        {4, 9},
        {5, 10},
        {6, 17},
        {7, 17},
        {8, 20},
        {9, 24},
        {10, 30},
    }};
    auto i = Algo::cutRod(0, data);
    // Expect equality.
    EXPECT_EQ(0, i);
}
