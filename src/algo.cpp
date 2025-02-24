#include "algo.hpp"

void Example::Print() { std::cout << "Hello World." << std::endl; }

// @brief Recursive top-down implementation. return number'th element of fibonacci sequence.
[[maybe_unused]] int Algo::fibonacci(int number) {
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
[[maybe_unused]] int Algo::fibonacciBottomUp(int number) {
    std::vector<int> fib = {0, 1};  // includes base case within vector definition.

    for (int i = 2; i <= number; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    return fib[number];
}

// @brief Recursive top-down implementation, return maximum price of rod input length.
[[maybe_unused]] int Algo::cutRod(int length, std::array<Rod, NUM_LENGTH> const &data) {
    if (length == 0) {
        return 0;
    }

    int price = 0;
    for (int i = 1; i <= length; i++) {
        price = std::max(price, (data[i].price + cutRod(length - i, data)));
    }

    return price;
}

// @brief Recursive top-down implementation, return maximum price of rod input length.
[[maybe_unused]] int Algo::cutRodDynamic(int length, std::array<Rod, NUM_LENGTH> const &data) {
    if (length == 0) {
        return 0;
    }

    int price = 0;
    for (int i = 1; i <= length; i++) {
        price = std::max(price, (data[i].price + cutRod(length - i, data)));
    }

    return price;
}