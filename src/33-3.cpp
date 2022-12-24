#include <iostream>
#include <chrono>
#include <future>
using namespace std::chrono_literals;

std::packaged_task<int()> task(
	[]() {
		std::cout << "call task\n";
		std::this_thread::sleep_for(3s); 
		return 5; 
	}
);

std::future<int> bar()
{
	return task.get_future();
}

/*
std::future<int> bar()
{
	std::future<int> r = task.get_future();
	std::thread t(std::move(task));
	t.detach();
	return r;
}
*/

std::future<void> foo()
{
	std::cout << "call foo\n";
	std::cout << "before bar\n";
	auto i = co_await bar();
	std::cout << "after bar\n";
	std::cout << "result = " << i;
}

int main()
{
	std::cout << "before foo\n";
	auto w = foo();
	std::cout << "after foo\n";
	w.wait();
}
