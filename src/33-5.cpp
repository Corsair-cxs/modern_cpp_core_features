awaitable_string operator co_await(std::string&& str)
{
	return awaitable_string{ str };
}

std::future<std::string> foo()
{
	auto str = co_await std::string{ "hello" };
	co_return str;
}
