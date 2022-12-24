#define STATIC_ASSERT_CONCAT_IMP(x, y) x ## y
#define STATIC_ASSERT_CONCAT(x, y) \
    STATIC_ASSERT_CONCAT_IMP(x, y)

// 方案1
#define STATIC_ASSERT(expr)                 \
    do {                                    \
        char STATIC_ASSERT_CONCAT(          \
            static_assert_var, __COUNTER__) \
            [(expr) != 0 ? 1 : -1];         \
    } while (0)


template<bool>
struct static_assert_st;
template<>
struct static_assert_st<true> {};

// 方案2
#define STATIC_ASSERT2(expr)    \
    static_assert_st<(expr) != 0>()

// 方案3
#define STATIC_ASSERT3(expr)        \
    static_assert_st<(expr) != 0>   \
    STATIC_ASSERT_CONCAT(           \
    static_assert_var, __COUNTER__)
