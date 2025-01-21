#include "header.hpp"
#include "data.hpp"

int main() {
    std::vector<Rod> data{
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
    };

    Example myExample;
    myExample.Print();
}
