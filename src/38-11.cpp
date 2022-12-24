template <class T, std::size_t N>
struct A {
	T array[N];
};
A a{ {1, 2, 3} };

template <typename T>
struct B {
	T array[2];
};
B b = { 0, 1 };
