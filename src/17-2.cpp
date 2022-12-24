#include <vector>
struct X
{
	X() { std::cout << "default ctor" << std::endl; }
	X(const X& other) {
		std::cout << "copy ctor" << std::endl;
	}
};

int main()
{
	std::vector<X> x(10);
	std::cout << "for (auto n : x)" << std::endl;
	for (auto n : x) {
	}
	std::cout << "for (const auto &n : x)" << std::endl;
	for (const auto &n : x) {
	}
}
