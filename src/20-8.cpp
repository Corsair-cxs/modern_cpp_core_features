class BindBase1 {
public:
	int a = 42;
	double b = 11.7;
};

class BindTest1 : public BindBase1 {};

class BindBase2 {};

class BindTest2 : public BindBase2 {
public:
	int a = 42;
	double b = 11.7;
};

class BindBase3 {
public:
	int a = 42;
};

class BindTest3 : public BindBase3 {
public:
	double b = 11.7;
};

int main()
{
	BindTest1 bt1;
	BindTest2 bt2;
	BindTest3 bt3;
	auto[x1, y1] = bt1;	// 编译成功
	auto[x2, y2] = bt2;	// 编译成功
	auto[x3, y3] = bt3;	// 编译错误
}
