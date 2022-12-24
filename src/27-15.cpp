struct X
{
	constexpr virtual int f() const { return 1; }
};

int main() {
	constexpr X x;
	int i = x.f();
}

/* GIMPLE

main ()
{
  int D.2138;

  {
    const struct X x;
    int i;

    try
      {
        _1 = &_ZTV1X + 16;
        x._vptr.X = _1;
        i = 1; // 注意此处赋值
      }
    finally
      {
        x = {CLOBBER};
      }
  }
  D.2138 = 0;
  return D.2138;
}

*/
