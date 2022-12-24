void(*fp)() = nullptr;
void foo() noexcept {}

int main()
{
	fp = &foo;
}
