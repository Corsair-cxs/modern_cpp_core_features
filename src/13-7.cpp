#include <iostream>

struct Base {
	Base() = default;
	template<typename T> Base(T, typename T::type = 0)
	{
		std::cout << "Base(T, typename T::type)" << std::endl;
	}
	Base(int) { std::cout << "Base(int)" << std::endl; }
};

struct Derived : Base {
	using Base::Base;
	Derived(int) { std::cout << "Derived(int)" << std::endl; }
};

int main()
{
	Derived d(42L);
}
