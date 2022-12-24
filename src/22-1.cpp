#include <map>
#include <string>

template<class T>
using int_map = std::map<int, T>;

int main()
{
	int_map<std::string> int2string;
	int2string[11] = "7";
}
