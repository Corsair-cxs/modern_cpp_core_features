class Base {
//	void foo(long &);
public:
	void foo(long &) = delete;	// 删除foo(long &)函数
	void foo(int) {}
};

class Derived : public Base {
public:
	using Base::foo;
	void foo(const char *) {}
};

int main()
{
	Derived d;
	d.foo("hello");
	d.foo(5);
}
