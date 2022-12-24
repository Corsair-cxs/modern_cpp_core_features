class Base1 {
public:
	Base1(int) { std::cout << "Base1(int x)" << std::endl; };
};

class Base2 {
public:
	Base2(int) { std::cout << "Base2(int x)" << std::endl; };
};

class Derived : public Base1, Base2 {
public:
	using Base1::Base1;
	using Base2::Base2;
};

int main()
{
	Derived d(5);
}
