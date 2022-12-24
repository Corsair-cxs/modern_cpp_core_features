#include <iostream>

#define M(x, ...) __VA_ARGS__
int x[2] = { M(1'2,3'4) };

int main()
{
	std::cout << "x[0] = "<< x[0] << ", x[1] = " << x[1] << std::endl;
}
