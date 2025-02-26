#ifndef ALGO_H
#define ALGO_H

#include "data.hpp"
#include <algorithm>
#include <array>
#include <vector>

class Algo {
  public:
    [[maybe_unused]] static int fibonacci(const int number);
    [[maybe_unused]] static int fibonacciBottomUp(const int number);
    [[maybe_unused]] static int cutRod(const int length, std::array<Rod, NUM_LENGTH> const &data);
    [[maybe_unused]] static int cutRodMemorized(const int length, std::array<Rod, NUM_LENGTH> const &data);
    [[maybe_unused]] static std::array<int, NUM_LENGTH>
    cutRodMemorizedAux(const int length, std::array<Rod, NUM_LENGTH> const &data, std::array<int, NUM_LENGTH> &ret);
};

#endif
