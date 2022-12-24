thread_local int tv;
static int sv;

int main()
{
	constexpr int *sp = &sv;	// 编译成功，sv的地址在编译时确定
	constexpr int *tp = &tv;	// 编译失败，tv的地址在运行时确定
}
