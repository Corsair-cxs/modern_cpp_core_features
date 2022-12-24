#include <iostream>

class SomeObj1 {
public:
	void Dump2File() const
	{
		std::cout << "dump this object to file" << std::endl;
	}
};

class SomeObj2 {
};

template<class T>
auto DumpObj(const T &t)->decltype(((void)t.Dump2File()), void())
{
	t.Dump2File();
}

void DumpObj(...)
{
	std::cout << "the object must have a member function Dump2File" << std::endl;
}

int main()
{
	DumpObj(SomeObj1());
	DumpObj(SomeObj2());
}
