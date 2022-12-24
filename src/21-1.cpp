#include <iostream>
int foo() noexcept
{
    return 42;
}

int foo1()
{
    return 42;
}

int foo2() throw()
{
    return 42;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << "noexcept(foo())  = " << noexcept(foo()) << std::endl;
    std::cout << "noexcept(foo1()) = " << noexcept(foo1()) << std::endl;
    std::cout << "noexcept(foo2()) = " << noexcept(foo2()) << std::endl;
}
