class NonCopyable
{
public:
	NonCopyable() = default;                       // 显式添加默认构造函数
	NonCopyable(const NonCopyable&) = delete;      // 显式删除拷贝构造函数
	NonCopyable& operator=(const NonCopyable&) = delete;	// 显式删除拷贝赋值运算符函数
};

int main()
{
	NonCopyable a, b;
	a = b;			//编译失败，拷贝赋值运算符已被删除
}
