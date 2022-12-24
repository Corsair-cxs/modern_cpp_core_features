void foo() = delete;
static void bar() = delete;
int main()
{
	bar();		// 编译失败，函数已经被显式删除
	foo();		// 编译失败，函数已经被显式删除
}
