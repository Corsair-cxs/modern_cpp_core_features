template<class ...T>
int baz(T ...t)
{
	return 0;
}

template<class ...Args>
void foo(Args ...args) {}

template<class ...Args>
class bar {
public:
	bar(Args ...args)
	{
		foo(baz(&args...) + args...);
	}
};

int main()
{
	bar<int, double, unsigned int> b(1, 5.0, 8);
}
