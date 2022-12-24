#include <iostream>
#include <limits>
#include <cstdio>
int main(int argc, char *argv[])
{
	// 使用宏方法
	std::cout << "LLONG_MAX = " << LLONG_MAX << std::endl;
	std::cout << "LLONG_MIN = " << LLONG_MIN << std::endl;
	std::cout << "ULLONG_MAX = " << ULLONG_MAX << std::endl;
	
	// 使用类模板方法
	std::cout << "std::numeric_limits<long long>::max() = " 
		<< std::numeric_limits<long long>::max() << std::endl;
	std::cout << "std::numeric_limits<long long>::min() = " 
		<< std::numeric_limits<long long>::min() << std::endl;
	std::cout << "std::numeric_limits<unsigned long long>::max() = " 
		<< std::numeric_limits<unsigned long long>::max() << std::endl;
	
	// 使用printf打印输出
	std::printf("LLONG_MAX = %lld\n", LLONG_MAX);	
	std::printf("LLONG_MIN = %lld\n", LLONG_MIN);
	std::printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
}
