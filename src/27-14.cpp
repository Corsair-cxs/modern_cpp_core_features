struct X
{
    virtual int f() const { return 1; }
};

 int main() {
    X x;
    int i = x.f();
 }

/* GIMPLE

main ()
{
  int D.2137;

  {
    struct X x;
    int i;

    try
      {
        _1 = &_ZTV1X + 16;
        x._vptr.X = _1;
        i = X::f (&x); // 注意此处赋值
      }
    finally
      {
        x = {CLOBBER};
      }
  }
  D.2137 = 0;
  return D.2137;
}


X::f (const struct X * const this)
{
  int D.2139;

  D.2139 = 1;
  return D.2139;
}

*/