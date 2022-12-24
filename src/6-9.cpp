#include <iostream>

struct X {
	X() = default;
	X(const X&) = default;
	X(X&&) {
		std::cout << "move ctor";
	}
};

X f(X x) {
	return x;
}

int main() {
	X r = f(X{});
}
