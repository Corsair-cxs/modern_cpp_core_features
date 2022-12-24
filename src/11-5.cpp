#include <iostream>
#include <string>
#include <vector>

union U
{
	U() {}
	~U() {}
	int x1;
	float x2;
	std::string x3;
	std::vector<int> x4;
};

int main()
{
	U u;
	new(&u.x3) std::string("hello world");
	std::cout << u.x3 << std::endl;
	u.x3.~basic_string();

	new(&u.x4) std::vector<int>;
	u.x4.push_back(58);
	std::cout << u.x4[0] << std::endl;
	u.x4.~vector();
}
