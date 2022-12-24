#include <iostream>
#include <string>
#include <vector>

struct BindTest {
	int a = 42;
	std::string b = "hello structured binding";
};

int main()
{
	std::vector<BindTest> bt{ {11, "hello"},  {7, "c++"},  {42, "world"} };
	for (const auto& [x, y] : bt) {
		std::cout << "x=" << x << " y=" << y << std::endl;
	}
}
