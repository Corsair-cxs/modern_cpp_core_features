template <class T> struct A { using X = typename T::X; };
template <class T> typename T::X foo(typename A<T>::X);
template <class T> void foo(...) { }
template <class T> auto bar(typename A<T>::X) -> typename T::X;
template <class T> void bar(...) { }

int main()
{
	foo<int>(0);
	bar<int>(0);
}
