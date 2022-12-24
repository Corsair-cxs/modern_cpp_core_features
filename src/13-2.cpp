class Base {
public:
	void foo(int) {}
};

class Derived : public Base {
public:
	using Base::foo;
	void foo(char*) {}
};

int main()
{
	Derived d;
	d.foo(5);
}
