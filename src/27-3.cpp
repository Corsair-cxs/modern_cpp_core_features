constexpr int max_unsigned_char()
{
	return 0xff;
}

constexpr int square(int x)
{
	return x * x;
}

constexpr int abs(int x)
{
	return x > 0 ? x : -x;
}

int main()
{
	char buffer1[max_unsigned_char()] = { 0 };
	char buffer2[square(5)] = { 0 };
	char buffer3[abs(-8)] = { 0 };
}
