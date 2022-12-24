#include <iostream>

class A
{
public:
    void print()
    {
        std::cout << "class A" << std::endl;
    }

    void test()
    {
        auto foo = [this] { 
            print(); 
            x = 5; 
        };
        foo();
    }
private:
    int x;
};

int main()
{
    A a;
    a.test();
}
