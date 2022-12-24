#include <iostream>
#include <string>

template<class T>
class base {
public:
	base() {}
	base(T t) : t_(t) {}
private:
	T t_;
};

template<class... Args>
class derived : public base<Args>...
{
public:
	using base<Args>::base...;
};

int main()
{
	derived<int, std::string, bool> d1 = 11;
	derived<int, std::string, bool> d2 = std::string("hello");
	derived<int, std::string, bool> d3 = true;
}
