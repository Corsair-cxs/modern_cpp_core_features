#include <iostream>

union U
{
	int x1;
	float x2;
};

int main()
{
	U u;
	u.x1 = 5;
	std::cout << u.x1 << std::endl;
	std::cout << u.x2 << std::endl;

	u.x2 = 5.0;
	std::cout << u.x1 << std::endl;
	std::cout << u.x2 << std::endl;
}
