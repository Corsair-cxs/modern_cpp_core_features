
#include <type_traits>

class A {
};

class B : public A {
};

class C {
};

template<class T>
class E {
	static_assert(std::is_base_of<A, T>::value);
};

int main(int argc, char *argv[])
{
 	E<C> x;							// 使用正确，但由于A不是C的基类，会触发失败断言
 	static_assert(sizeof(int) < 4);	// 使用正确，但表达式返回false，会触发失败断言
}
