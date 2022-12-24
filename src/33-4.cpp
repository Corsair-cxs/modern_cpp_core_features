class awaitable_string : public std::string {
public:
	using std::string::string;
	bool await_ready() const { return true; }
	void await_suspend(std::experimental::coroutine_handle<> h) const {}
	std::string await_resume() const { return *this; }
};

/*

class awaitable_string : public std::string {
public:
	using std::string::string;
	bool await_ready() const { return false; }
	void await_suspend(std::experimental::coroutine_handle<> h) const {
		std::thread t{ [h] {
            // 模拟复杂操作，用时3秒
			std::this_thread::sleep_for(3s);
			h(); }
		};
		t.detach();
	}
	std::string await_resume() const { return *this; }
};


*/

std::future<std::string> foo()
{
	auto str = co_await awaitable_string{ "hello" };
	co_return str;
}

int main()
{
	auto s = foo();
	std::cout << s.get();
}
