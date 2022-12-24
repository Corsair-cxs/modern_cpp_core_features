#include <type_traits>

class A {
};

class B : public A {
};

class C {
};

template<class T>
class E {
	static_assert(std::is_base_of<A, T>::value, "T is not base of A");
};

int main(int argc, char *argv[])
{
    static_assert(argc > 0, "argc > 0");	// 使用错误，argc>0不是常量表达式
    E<C> x;							        // 使用正确，但由于A不是C的基类，所以触发断言
    static_assert(sizeof(int) >= 4,		    // 使用正确，表达式返回真，不会触发失败断言
        "sizeof(int) >= 4");
    E<B> y;							        // 使用正确，A是B的基类，不会触发失败断言
}
