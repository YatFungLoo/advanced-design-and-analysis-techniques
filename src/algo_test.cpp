#include "algo.hpp"
#include <gtest/gtest.h>

// Price table.
static const std::array<Rod, NUM_LENGTH> data{{
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
// Answers.
static const std::vector<int> ans{0, 1, 5, 8, 10, 13, 17, 18, 22, 25, 30};

// Demonstrate some basic assertions.
TEST(cutRodTest, HandlesPositiveInput) {
    for (int i = 0; i < NUM_LENGTH; i++) {
        EXPECT_EQ(Algo::cutRod(i, data), ans[i]) << "i is : " << i << std::endl;;
    }
};