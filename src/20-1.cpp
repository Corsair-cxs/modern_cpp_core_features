#include <iostream>
#include <tuple>

std::tuple<int, int> return_multiple_values()
{
	return std::make_tuple(11, 7);
}

int main()
{
	int x = 0, y = 0;
	std::tie(x, y) = return_multiple_values();
	std::cout << "x=" << x << " y=" << y << std::endl;
}
