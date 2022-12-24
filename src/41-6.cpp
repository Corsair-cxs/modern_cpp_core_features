template <int N> void f2()
requires Add1<2 * N> {};
template <int N> void f2()
requires Add1<N * 2> && true {};

f2<0>(); // 编译失败
