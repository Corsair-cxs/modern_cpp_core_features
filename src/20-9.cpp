#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<int, std::string> id2str{ {1, "hello"}, 
	{3, "Structured"}, {5, "bindings"} };

	for (const auto& elem : id2str) {
		std::cout << "id=" << elem.first
			<< ", str=" << elem.second << std::endl;
	}
}
