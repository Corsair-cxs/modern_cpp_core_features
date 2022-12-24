enum class Color {
	Red,
	Green,
	Blue
};
int main()
{
	Color c{ 5 };		// 编译成功
	Color c1 = 5;		// 编译失败
	Color c2 = { 5 };	// 编译失败
	Color c3(5);		// 编译失败
}
