#include "algo.hpp"

void Example::Print() {
    std::cout << "Hello World." << std::endl;
}

// @breif Top down approach.
[[maybe_unused]] int Algo::cutRod(int length, std::array<Rod, NUM_LENGTH> const &data) {
    if (length == 0) {
        return 0;
    }

    int price = 0;
    for (int i = 0; i < length; i++) {
	price = std::max(price, (data[i].price + cutRod(length - i, data)));
    }

    return price;
};
