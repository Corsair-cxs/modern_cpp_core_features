#include <vector>
template<class T>
void foo(std::vector<T> &&t) {}
int main()
{
	std::vector<int> v{ 1,2,3 };
	foo(v);							// 编译错误
}
