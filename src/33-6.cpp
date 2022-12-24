#include <iostream>
#include <fstream>
#include <streambuf>
#include <future>

class file_io_string {
public:
	file_io_string(const char* file_name) {
		t_ = std::thread{ [file_name, this]() mutable {
			std::ifstream f(file_name);
			std::string str((std::istreambuf_iterator<char>(f)),
			std::istreambuf_iterator<char>());
			result_ = str;
			ready_ = true;
		} };
	}
	bool await_ready() const { return ready_; }
	void await_suspend(std::experimental::coroutine_handle<> h) {
		std::thread r{ [h, t = std::move(t_)] () mutable {
			t.join();
			h(); }
		};
		r.detach();
	}
	std::string await_resume() const { return result_; }
private:
	bool ready_ = false;
	std::thread t_;
	std::string result_;
};

std::future<std::string> foo()
{
	auto str = co_await file_io_string{ "test.txt" };
	co_return str;
}

int main()
{
	auto s = foo();
	std::cout << s.get();
}
