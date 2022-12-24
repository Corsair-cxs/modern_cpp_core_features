#include <iostream>

class Bar
{
public:
    Bar(int x, int y) : x_(x), y_(y) {}
    int operator () ()
    {
        return x_ * y_;
    }
private:
int x_;
int y_;
};

int main()
{
    int x = 5, y = 8;
    auto foo = [x, y] { return x * y; };
    Bar bar(x, y);
    std::cout << "foo() = " << foo() << std::endl;
    std::cout << "bar() = " << bar() << std::endl;
}
