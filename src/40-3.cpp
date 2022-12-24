class bar
{
public:
	bar() {};
	bar(bar&&) {};
};

int main()
{
	bar b;
	foo(b);
}
