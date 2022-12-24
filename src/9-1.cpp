#include <string>

struct C {
	C(std::string a, int b) {}
	C(int a) {}
};

void foo(C) {}
C bar()
{
	return {"world", 5};
}

int main()
{
	int x = {5};            // 复制初始化
	int x1{8};              // 直接初始化
	C x2 = {4};             // 复制初始化
	C x3{2};                // 直接初始化
	foo({8});               // 复制初始化
	foo({"hello", 8});      // 复制初始化
	C x4 = bar();           // 复制初始化
	C *x5 = new C{ "hi", 42 };  // 直接初始化
}
