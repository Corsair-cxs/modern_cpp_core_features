template <class T, class U>
struct X {
	S<int> s;
	U u;
	T t;
};

X x{ 1, 2, 3u, 4 };
