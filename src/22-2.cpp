#include <map>
#include <string>

template<class T>
struct int_map {
	typedef std::map<int, T> type;
};

int main()
{
	int_map<std::string>::type int2string;
	int2string[11] = "7";
}
