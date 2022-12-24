#include <iostream>
#include <string>

class X {
public:
	inline static std::string text{"hello"};
};

int main()
{
	X::text += " world";
	std::cout << X::text << std::endl;
}
