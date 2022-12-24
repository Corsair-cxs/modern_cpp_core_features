#include <iostream>
template<int a, int b>
struct add {
    enum {
        result = a + b
    };
};

int main()
{
    std::cout << add<5, 8>::result << std::endl;
}

/* GIMPLE

main ()
{
  int D.39267;
  _1 = std::basic_ostream<char>::operator<< (&cout, 13);
  std::basic_ostream<char>::operator<< (_1, endl);
  D.39267 = 0;
  return D.39267;
}

*/