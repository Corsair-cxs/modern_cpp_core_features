#include <iostream>

template<class T>
struct PI {
	static constexpr T value = static_cast<T>(3.1415926535897932385);
};

int main()
{
	std::cout << PI<float>::value << std::endl;
}
