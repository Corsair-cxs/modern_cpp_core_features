class Base {
	void foo(long &);
public:
	void foo(int) {}
};

int main()
{
	Base b;
	long l = 5;
	b.foo(8);
	b.foo(l);       // 编译错误
}
