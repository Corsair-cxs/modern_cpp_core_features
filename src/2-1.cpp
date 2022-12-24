namespace S1 {
	void foo() {}
}

namespace S2 {
	void foo() {}
}

using namespace S1;

int main()
{
	foo();
	S2::foo();
}
