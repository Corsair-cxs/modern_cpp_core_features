template <class T>
struct S {
	T x;
	T y;
};

S s1{ 1, 2 }; //编译成功 S<int>
S s2{ 1, 2u }; // 编译失败
