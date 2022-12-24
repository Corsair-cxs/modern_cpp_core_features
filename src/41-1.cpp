template <class T, class U = std::enable_if_t<std::is_integral_v<T>>>
struct X {};

X<int> x1; // 编译成功
X<std::string> x2; // 编译失败
