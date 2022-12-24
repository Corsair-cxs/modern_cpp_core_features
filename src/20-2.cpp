#include <iostream>
#include <tuple>

auto return_multiple_values()
{
	return std::make_tuple(11, 7);
}

int main()
{
	auto[x, y] = return_multiple_values();
	std::cout << "x=" << x << " y=" << y << std::endl;
}
