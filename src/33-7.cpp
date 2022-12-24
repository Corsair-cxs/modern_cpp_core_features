#include <experimental/resumable>
using namespace std::experimental;
struct my_int_generator {
	struct promise_type {
		int* value_ = nullptr;

		my_int_generator get_return_object() {
			return my_int_generator{ *this };
		}
		auto initial_suspend() const noexcept {
			return suspend_always{};
		}
		auto final_suspend() const noexcept {
			return suspend_always{};
		}
		auto yield_value(int& value) {
			value_ = &value;
			return suspend_always{};
		}
		void return_void() {}
	};

	explicit my_int_generator(promise_type& p) 
		: handle_(coroutine_handle<promise_type>::from_promise(p)) {}
	~my_int_generator() {
		if (handle_) {
			handle_.destroy();
		}
	}
	coroutine_handle<promise_type> handle_;
};

my_int_generator foo()
{
	for (int i = 0; i < 10; i++) {
		co_yield i;
	}
}

int main()
{
	auto obj = foo();
}
