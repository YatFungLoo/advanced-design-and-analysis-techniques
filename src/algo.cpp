#include "algo.hpp"

// @brief Recursive top-down implementation. return number'th element of fibonacci sequence.
[[maybe_unused]] int Algo::fibonacci(const int number) {
    if (number == 0)
        return 0;

    if (number == 1)
        return 1;

    int ret = 0;
    for (int i = 2; i <= number; i++) {
        ret = (fibonacci(number - 2) + fibonacci(number - 1));
    }

    return ret;
}

// @brief Iterative bottom-up implementation. return number'th element of fibonacci sequence.
[[maybe_unused]] int Algo::fibonacciBottomUp(const int number) {
    std::vector<int> fib = {0, 1}; // includes base case within vector definition.

    for (int i = 2; i <= number; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    return fib[number];
}

// @brief Recursive top-down implementation, return maximum price of rod input length.
[[maybe_unused]] int Algo::cutRod(const int length, std::array<Rod, NUM_LENGTH> const &data) {
    if (length == 0) {
        return 0;
    }

    int price = 0;
    for (int i = 1; i <= length; i++) {
        price = std::max(price, (data[i].price + cutRod(length - i, data)));
    }

    return price;
}

// @brief Recursive top-down memorized implementation, return maximum price of rod input length.
[[maybe_unused]] int Algo::cutRodMemorized(const int length, std::array<Rod, NUM_LENGTH> const &data) {
    std::array<int, NUM_LENGTH> ret;
    for (auto &i : ret) {
        i = 0;
    }
    ret = Algo::cutRodMemorizedAux(length, data, ret);
    return ret[length];
}

[[maybe_unused]] std::array<int, NUM_LENGTH>
Algo::cutRodMemorizedAux(const int length, std::array<Rod, NUM_LENGTH> const &data, std::array<int, NUM_LENGTH> &ret) {
    if (length == 0) {
        ret[length] = 0;
        return ret;
    }
    if (ret[length] > 0) {
        return ret;
    }

    int price = 0;
    for (int i = 1; i <= length; i++) {
        ret = cutRodMemorizedAux(length - i, data, ret);
        price = std::max(price, (data[i].price + ret[length - i]));
    }
    ret[length] = price;
    return ret;
}

int Algo::cutRodBottomUp(const int length, std::array<Rod, NUM_LENGTH> const &data) {
    std::array<int, NUM_LENGTH> ret; // Storing results.
    for (auto &i : ret) {
        i = 0;
    }

    int price = 0;
    for (int j = 1; j <= NUM_LENGTH; j++) {
        for (int i = 1; i <= j; i++) {
            price = std::max(price, data[i].price + ret[j - i]);
        }
        ret[j] = price;
    }
    return ret[length];
}
