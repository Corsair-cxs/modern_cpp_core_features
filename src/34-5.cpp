#include <iostream>
class X {
public:
	X() { std::cout << "X ctor" << std::endl; }
	X(const X&x) { std::cout << "X copy ctor" << std::endl; }
	~X() { std::cout << "X dtor" << std::endl; }
};

X make_x()
{
	X x1;
	return x1;
}

int main()
{
	X x2 = make_x();
}

/* GIMPLE

make_x ()
{
  struct X x1 [value-expr: *<retval>];

  X::X (<retval>);
  try
    {
      return <retval>;
    }
  catch
    {
      X::~X (<retval>);
    }
}


X::X (struct X * const this)
{
  _1 = std::operator<< <std::char_traits<char> > (&cout, "X ctor");
  std::basic_ostream<char>::operator<< (_1, endl);
}


main ()
{
  int D.72987;

  {
    struct X x2;

    try
      {
        x2 = make_x (); [return slot optimization]
        try
          {

          }
        finally
          {
            X::~X (&x2);
          }
      }
    finally
      {
        x2 = {CLOBBER};
      }
  }
  D.72987 = 0;
  return D.72987;
}


X::~X (struct X * const this)
{
  try
    {
      {
        _1 = std::operator<< <std::char_traits<char> > (&cout, "X dtor");
        std::basic_ostream<char>::operator<< (_1, endl);
      }
      <D.66050>:
    }
  catch
    {
      <<<eh_must_not_throw (terminate)>>>
    }
}

*/


/* GIMPLE -fno-elide-constructors

make_x ()
{
  struct X x1;

  try
    {
      X::X (&x1);
      try
        {
          X::X (<retval>, &x1);
          return <retval>;
        }
      finally
        {
          X::~X (&x1);
        }
    }
  finally
    {
      x1 = {CLOBBER};
    }
}


X::X (struct X * const this)
{
  _1 = std::operator<< <std::char_traits<char> > (&cout, "X ctor");
  std::basic_ostream<char>::operator<< (_1, endl);
}


X::X (struct X * const this, const struct X & x)
{
  _1 = std::operator<< <std::char_traits<char> > (&cout, "X copy ctor");
  std::basic_ostream<char>::operator<< (_1, endl);
}


X::~X (struct X * const this)
{
  try
    {
      {
        _1 = std::operator<< <std::char_traits<char> > (&cout, "X dtor");
        std::basic_ostream<char>::operator<< (_1, endl);
      }
      <D.35049>:
    }
  catch
    {
      <<<eh_must_not_throw (terminate)>>>
    }
}


main ()
{
  struct X D.35059;
  int D.37648;

  {
    struct X x2;

    try
      {
        D.35059 = make_x (); [return slot optimization]
        try
          {
            try
              {
                X::X (&x2, &D.35059);
              }
            finally
              {
                try
                  {
                    X::~X (&D.35059);
                  }
                catch
                  {
                    X::~X (&x2);
                  }
              }
          }
        finally
          {
            D.35059 = {CLOBBER};
          }
        try
          {

          }
        finally
          {
            X::~X (&x2);
          }
      }
    finally
      {
        x2 = {CLOBBER};
      }
  }
  D.37648 = 0;
  return D.37648;
}

*/