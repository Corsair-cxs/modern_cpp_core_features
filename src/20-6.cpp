#include <iostream>

int main()
{
	int a[3]{ 1, 3, 5 };
	auto[x, y, z] = a;
	std::cout << "[x, y, z]=[" 
		<< x << ", " 
		<< y << ", " 
		<< z << "]" << std::endl;
}
