#include <iostream>

int main()
{
    int x = 5, y = 8;
    auto foo = [x, &y]() mutable {
        x += 1;
        y += 2;
        std::cout << "lambda x = " << x << ", y = " << y << std::endl;
        return x * y;
    };
    foo();
    std::cout << "call1  x = " << x << ", y = " << y << std::endl;
    foo();
    std::cout << "call2  x = " << x << ", y = " << y << std::endl;
}
