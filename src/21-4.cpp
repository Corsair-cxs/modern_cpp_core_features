#include <iostream>

struct M {
    M() {}
    M(const M&) {}
    M(M&&) noexcept {}
    M operator= (const M&) noexcept { return *this; }
    M operator= (M&&) { return *this; }
};

struct X {
    M m;
};

#define PRINT_NOEXCEPT(x)    \
    std::cout << #x << " = " << x << std::endl

int main()
{
    X x;
    std::cout << std::boolalpha;
    PRINT_NOEXCEPT(noexcept(X()));
    PRINT_NOEXCEPT(noexcept(X(x)));
    PRINT_NOEXCEPT(noexcept(X(std::move(x))));
    PRINT_NOEXCEPT(noexcept(x.operator=(x)));
    PRINT_NOEXCEPT(noexcept(x.operator=(std::move(x))));
}
