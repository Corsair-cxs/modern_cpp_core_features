// SFINAE版本
template <typename T1, typename T2>
struct pair {
    template <typename U1=T1, typename U2=T2,
        std::enable_if_t<
            std::is_constructible_v<T1, U1> &&
            std::is_constructible_v<T2, U2> &&
            std::is_convertible_v<U1, T1> &&
            std::is_convertible_v<U2, T2>
        , int> = 0>
    constexpr pair(U1&&, U2&& );
    
    template <typename U1=T1, typename U2=T2,
        std::enable_if_t<
            std::is_constructible_v<T1, U1> &&
            std::is_constructible_v<T2, U2> &&
            !(std::is_convertible_v<U1, T1> &&
              std::is_convertible_v<U2, T2>)
        , int> = 0>
    explicit constexpr pair(U1&&, U2&& );    
};

// 概念版本
template <typename T1, typename T2>
struct pair {
    template <typename U1=T1, typename U2=T2>
        requires std::is_constructible_v<T1, U1> &&
            std::is_constructible_v<T2, U2> &&
            std::is_convertible_v<U1, T1> &&
            std::is_convertible_v<U2, T2>
    constexpr pair(U1&&, U2&& );
    
    template <typename U1=T1, typename U2=T2>
        requires std::is_constructible_v<T1, U1> &&
            std::is_constructible_v<T2, U2>
    explicit constexpr pair(U1&&, U2&& );    
};
