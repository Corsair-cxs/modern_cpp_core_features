class BindTest {
	int a = 42;		// 私有成员变量
public:
	double b = 11.7;
};

int main()
{
	BindTest bt;
	auto[x, y] = bt;
}
