template<class T>
T foo(T& t)
{
	T tt(t);
	return tt;
}

void foo(...) {}

int main()
{
	double x = 7.0;
	foo(x);
	foo(5);
}
