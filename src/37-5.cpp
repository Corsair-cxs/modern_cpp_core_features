template <class T> class X { };
template <class T> void f(T t) { }
struct {} unnamed_obj;

int main()
{
	struct A { };
	enum { e1 };
	typedef struct {} B;
	B b;
	X<A>  x1;		// C++11编译成功，C++03编译失败
	X<A*> x2;		// C++11编译成功，C++03编译失败
	X<B>  x3;		// C++11编译成功，C++03编译失败
	f(e1);			// C++11编译成功，C++03编译失败
	f(unnamed_obj); // C++11编译成功，C++03编译失败
	f(b);			// C++11编译成功，C++03编译失败
}
