template<class T>
T foo(T*)
{
	return T();
}

void foo(...) {}

class bar 
{
	bar() {};
};

int main()
{
	foo(static_cast<bar *>(nullptr));
}
