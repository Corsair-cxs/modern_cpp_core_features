void(*fp)() noexcept = nullptr;
void foo() {}

int main()
{
	fp = &foo;
}
