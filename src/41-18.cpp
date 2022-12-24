template <class C>
concept IntegerType = std::is_integral_v<C>;

IntegerType auto i1 = 5.2;	// 编译失败
IntegerType auto i2 = 11;	// 编译成功

IntegerType decltype(auto) i3 = 4.8;	// 编译失败
IntegerType decltype(auto) i4 = 7;	// 编译成功

IntegerType auto foo1() { return 1.1; }	// 编译失败
IntegerType auto foo2() { return 0; }	// 编译成功

auto bar1 = []()->IntegerType auto  { return 1.0; };	// 编译失败
auto bar2 = []()->IntegerType auto  { return 10; };	// 编译成功

const IntegerType auto i5 = 23;	// 编译成功
IntegerType auto const i6 = 8;	// 编译成功
IntegerType const auto i7 = 6;	// 编译失败
