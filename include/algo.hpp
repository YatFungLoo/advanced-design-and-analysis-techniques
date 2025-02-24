#ifndef ALGO_H
#define ALGO_H

#include <algorithm>
#include <array>
#include <data.hpp>
#include <iostream>

class Example {
  public:
    void Print();
};

class Algo {
  public:
    [[maybe_unused]] static int fibonacci(int number);
    [[maybe_unused]] static int fibonacciBottomUp(int number);
    [[maybe_unused]] static int cutRod(int length, std::array<Rod, NUM_LENGTH> const &data);
};

#endif
