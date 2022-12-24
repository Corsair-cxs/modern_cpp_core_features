#include <iostream>
#include <string>
#include <vector>

union U
{
	U() : x3() {}
	~U() { x3.~basic_string(); }
	int x1;
	float x2;
	std::string x3;
	std::vector<int> x4;
};

int main()
{
	U u;
	u.x4.push_back(58);
}
