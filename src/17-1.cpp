#include <iostream>
#include <string>
#include <map>

std::map<int, std::string> index_map{ {1, "hello"}, {2, "world"}, {3, "!"} };
int int_array[] = { 0, 1, 2, 3, 4, 5 };

int main()
{
	for (const auto &e : index_map) {
		std::cout << "key=" << e.first << ", value=" << e.second << std::endl;
	}
	
	for (auto e : int_array) {
		std::cout << e << std::endl;
	}
}
