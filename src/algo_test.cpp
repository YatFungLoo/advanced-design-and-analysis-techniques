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

TEST(cutRodDynamicBottomUpTest, HandlesPositiveInput) {
    for (int i = 0; i < NUM_LENGTH; i++) {
        EXPECT_EQ(Algo::cutRodBottomUp(i, TestData::data), TestData::ans[i]) << "i is : " << i << std::endl;
    }
}

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

TEST(matrixProductTest, HandlesPositiveInput) {

    /*
      1, 2,    1, 2,     7, 10,
      3, 4, *  3, 4,  =  15,22,
     */

    const std::vector<std::vector<int>> A = {{1, 2}, {3, 4}};
    const auto q = A.size() / 2;
    const std::vector<std::vector<int>> B = {{1, 2}, {3, 4}};
    const auto p = B.size() / 2;
    const auto r = p; // Assuming p and q are square matrix.
    std::vector<std::vector<int>> answer = {{7, 10}, {15, 22}};

    for (int i = 0; i < 1; i++) {
        EXPECT_EQ(Algo::matrixChainProduct(A, B, p, q, r), answer);
    }
};
