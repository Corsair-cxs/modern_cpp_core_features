#include <iostream>
enum class Index : int {};

int main()
{
	Index a{ 5 };
	Index b{ 10 };
	// a = 12;
	// int c = b;
	std::cout << "a < b is " 
		<< std::boolalpha 
		<< (a < b) << std::endl;
}
