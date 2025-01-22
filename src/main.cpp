#include "data.hpp"
#include "algo.hpp"
#include <array>
#include <algorithm>

[[maybe_unused]] int cutRod(int length, std::array<Rod, NUM_LENGTH> const &data);

int main() {
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
}

// @breif Top down approach.
[[maybe_unused]] int cutRod(int length, std::array<Rod, NUM_LENGTH> const &data) {
    if (length == 0) {
        return 0;
    }

    int price = 0;
    for (int i = 0; i < length; i++) {
	price = std::max(price, (data[i].price + cutRod(length - i, data)));
    }

    return price;
}
