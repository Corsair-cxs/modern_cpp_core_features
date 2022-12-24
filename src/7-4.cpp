void bar1()
{
    int x = 5, y = 8;
    auto foo = [x, y] {
        x += 1;             // 编译失败，无法改变捕获变量的值
        y += 2;             // 编译失败，无法改变捕获变量的值
        return x * y;
    };
    std::cout << foo() << std::endl;
}

void bar2()
{
    int x = 5, y = 8;
    auto foo = [&x, &y] {
        x += 1;
        y += 2;
        return x * y;
    };
    std::cout << foo() << std::endl;
}

void bar3()
{
    int x = 5, y = 8;
    auto foo = [x, y] () mutable {
        x += 1;
        y += 2;
        return x * y;
    };
    std::cout << foo() << std::endl;
}
