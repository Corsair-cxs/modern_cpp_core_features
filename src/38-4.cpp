template<class T1, class T2>
struct foo
{
	foo(T1, T2) {}
};

int main()
{
	foo v1(5, 6.8);					// 编译成功
	foo<> v2(5, 6.8);				// 编译错误
	foo<int> v3(5, 6.8);			// 编译错误
	foo<int, double> v4(5, 6.8);	// 编译成功
}
