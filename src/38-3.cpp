template<class T1, class T2>
void foo(T1, T2) {}

int main()
{
	foo<int>(5, 6.8);
}
