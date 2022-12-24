struct X {};
struct Y { Y(X) {} }; // X 可以转化为 Y

X foo(Y, Y) { return X(); }

template <class T>
auto foo(T t1, T t2) -> decltype(t1 + t2) {
	return t1 + t2;
}

int main()
{
	X x1, x2;
	X x3 = foo(x1, x2);
}
