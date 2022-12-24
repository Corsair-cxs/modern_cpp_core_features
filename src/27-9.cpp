void check1(int i)
{
	if constexpr (i > 0) {					// 编译失败，不是常量表达式
		std::cout << "i > 0" << std::endl;
	}
	else {
		std::cout << "i <= 0" << std::endl;
	}
}

void check2()
{
	if constexpr (sizeof(int) > sizeof(char)) {
		std::cout << "sizeof(int) > sizeof(char)" << std::endl;
	}
	else {
		std::cout << "sizeof(int) <= sizeof(char)" << std::endl;
	}
}
