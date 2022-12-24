#include <iostream>

int main()
{
    int x = 5, y = 8;
    auto foo = [=] { return x * y; };
    int z = foo();
}

/* GIMPLE

main ()
{
  int D.39253;
  {
    int x;
    int y;
    struct __lambda0 foo;
    typedef struct __lambda0 __lambda0;
    int z;

    try
      {
        x = 5;
        y = 8;
        foo.__x = x;
        foo.__y = y;
        z = main()::<lambda()>::operator() (&foo);
      }
    finally
      {
        foo = {CLOBBER};
      }
  }
  D.39253 = 0;
  return D.39253;
}


main()::<lambda()>::operator() (const struct __lambda0 * const __closure)
{
  int D.39255;
  const int x [value-expr: __closure->__x];
  const int y [value-expr: __closure->__y];

  _1 = __closure->__x;
  _2 = __closure->__y;
  D.39255 = _1 * _2;
  return D.39255;
}


*/