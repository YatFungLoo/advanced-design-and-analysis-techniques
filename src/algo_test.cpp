#include "algo.hpp"
#include <gtest/gtest.h>

// cutRub tests
TEST(cutRodTest, HandlesPositiveInput) {
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
    for (int i = 0; i < NUM_LENGTH; i++) {
        EXPECT_EQ(Algo::cutRod(i, data), ans[i]) << "i is : " << i << std::endl;
    }
};

TEST(cutRodDynamicTest, HandlesPositiveInput) {
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
    for (int i = 0; i < NUM_LENGTH; i++) {
        EXPECT_EQ(Algo::cutRodDynamic(i, data), ans[i]) << "i is : " << i << std::endl;
    }
};

// fib tests
TEST(fibTest, HandlesPositiveInput) {
    // Answers.
    static const std::vector<int> ans{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int size = ans.size();
    for (int i = 0; i < size; i++) {
        EXPECT_EQ(Algo::fibonacci(i), ans[i]);
    }
};

TEST(fibBottomUpTest, HandlesPositiveInput) {
    // Answers.
    static const std::vector<int> ans{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int size = ans.size();
    for (int i = 0; i < size; i++) {
        EXPECT_EQ(Algo::fibonacciBottomUp(i), ans[i]);
    }
};