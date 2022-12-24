constexpr int foo()
{
	return []() { return 58; }();
}

auto get_size = [](int i) { return i * 2; };
char buffer1[foo()] = { 0 };
char buffer2[get_size(5)] = { 0 };
