#include <iostream>

class X {
public:
	constexpr X() : x1(5) {}
	constexpr X(int i) : x1(0)
	{
		if (i > 0) {
			x1 = 5;
		}
		else {
			x1 = 8;
		}
	}
	constexpr void set(int i)
	{
		x1 = i;
	}
	constexpr int get() const
	{
		return x1;
	}
private:
	int x1;
};

constexpr X make_x()
{
	X x;
	x.set(42);
	return x;
}

int main()
{
	constexpr X x1(-1);
	constexpr X x2 = make_x();
	constexpr int a1 = x1.get();
	constexpr int a2 = x2.get();
	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
}

/* GIMPLE

main ()
{
  int D.39319;

  {
    const struct X x1;
    const struct X x2;
    const int a1;
    const int a2;

    try
      {
        x1.x1 = 8;
        x2.x1 = 42;
        a1 = 8;
        a2 = 42;
        _1 = std::basic_ostream<char>::operator<< (&cout, 8);
        std::basic_ostream<char>::operator<< (_1, endl);
        _2 = std::basic_ostream<char>::operator<< (&cout, 42);
        std::basic_ostream<char>::operator<< (_2, endl);
      }
    finally
      {
        x1 = {CLOBBER};
        x2 = {CLOBBER};
      }
  }
  D.39319 = 0;
  return D.39319;
}

*/