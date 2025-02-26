#include "algo_test.hpp"
#include "algo.hpp"
#include <gtest/gtest.h>

// cutRub tests
TEST(cutRodTest, HandlesPositiveInput) {
    for (int i = 0; i < NUM_LENGTH; i++) {
        EXPECT_EQ(Algo::cutRod(i, TestData::data), TestData::ans[i]) << "i is : " << i << std::endl;
    }
};

TEST(cutRodDynamicTest, HandlesPositiveInput) {
    for (int i = 0; i < NUM_LENGTH; i++) {
        EXPECT_EQ(Algo::cutRodMemorized(i, TestData::data), TestData::ans[i]) << "i is : " << i << std::endl;
    }
};

// fib tests
TEST(fibTest, HandlesPositiveInput) {
    int size = TestData::fib_ans.size();
    for (int i = 0; i < size; i++) {
        EXPECT_EQ(Algo::fibonacci(i), TestData::fib_ans[i]);
    }
};

TEST(fibBottomUpTest, HandlesPositiveInput) {
    int size = TestData::fib_ans.size();
    for (int i = 0; i < size; i++) {
        EXPECT_EQ(Algo::fibonacciBottomUp(i), TestData::fib_ans[i]);
    }
};