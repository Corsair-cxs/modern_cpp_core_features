#include <iostream>
#include <string>

class MyStringWithIndex : public std::string {
public:
	int index_ = 0;
};

std::ostream& operator << (std::ostream &o, const MyStringWithIndex& s)
{
	o << s.index_ << ":" << s.c_str();
	return o;
}

int main()
{
	MyStringWithIndex s{ {"hello world"}, 11 };
	std::cout << s << std::endl;
}
