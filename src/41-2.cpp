template <class C>
concept IntegerType = std::is_integral_v<C>;

template <IntegerType T>
struct X {};
