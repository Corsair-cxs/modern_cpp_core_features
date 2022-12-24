class Base {
	Base(int) {}
public:
	Base(double) {}
};

class Derived : public Base {
public:
	using Base::Base;
};

int main()
{
	Derived d(5.5);
	Derived d1(5);
}
