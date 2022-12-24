#include <iostream>
#include <future>

class Work
{
  private:
    int value;

  public:
    Work() : value(42) {}
    std::future<int> spawn()
    {
        return std::async([=]() -> int { return value; });
    }
};

/*
class Work
{
  private:
    int value;

  public:
    Work() : value(42) {}
    std::future<int> spawn()
    {
        return std::async([=, tmp = *this]() -> int { return tmp.value; });
    }
};

class Work
{
  private:
    int value;

  public:
    Work() : value(42) {}
    std::future<int> spawn()
    {
        return std::async([=, *this]() -> int { return value; });
    }
};

*/

std::future<int> foo()
{
    Work tmp;
    return tmp.spawn();
}

int main()
{
    std::future<int> f = foo();
    f.wait();
  std::cout << "f.get() = " << f.get() << std::endl;
}
