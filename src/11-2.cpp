#include <iostream>
#include <string>
#include <vector>

union U
{
	U() {}		// 存在非平凡类型成员，必须提供构造函数
	~U() {}		// 存在非平凡类型成员，必须提供析构函数
	int x1;
	float x2;
	std::string x3;
	std::vector<int> x4;
};

int main()
{
	U u;
	u.x3 = "hello world";
	std::cout << u.x3;
}
