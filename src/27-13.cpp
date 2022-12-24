#include <iostream>
#include <string>
#include <type_traits>

template<class T> auto any2i(T t)
{
	if constexpr (std::is_same<T, std::string>::value && T::npos == -1) {
		return atoi(t.c_str());
	}
	else {
		return t;
	}
}

int main()
{
	std::cout << any2i(std::string("6")) << std::endl;
	std::cout << any2i(6) << std::endl;
}
