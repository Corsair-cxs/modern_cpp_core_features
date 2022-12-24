constexpr void foo()
{
}

constexpr int next(int x)
{
	return ++x;
}

int g()
{
	return 42;
}

constexpr int f()
{
	return g();
}

constexpr int max_unsigned_char2();
enum {
	max_uchar = max_unsigned_char2()
}

constexpr int abs2(int x)
{
	if (x > 0) {
		return x;
	} else {
		return -x;
	}
}

constexpr int sum(int x)
{
	int result = 0;
	while (x > 0)
	{
		result += x--;
	}
	return result;
}
