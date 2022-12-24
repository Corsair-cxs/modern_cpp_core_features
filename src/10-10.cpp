struct type
{
	type(long long) {}
	explicit type(long) = delete;
};
void foo(type) {}

int main()
{
	foo(type(58));
	foo(58);
}
