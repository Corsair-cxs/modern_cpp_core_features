#include <iostream>

int x = 1;
int main()
{
    int y = 2;
    static int z = 3;
    auto foo = [y] { return x + y + z; };
    std::cout << foo() << std::endl;
}
