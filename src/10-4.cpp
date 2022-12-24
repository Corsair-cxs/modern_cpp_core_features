class NonTrivial
{
	int i;
public:
	NonTrivial(int n) : i(n), j(n) {}
	NonTrivial() {}
	int j;
};

class Trivial
{
	int i;
public:
	Trivial(int n) : i(n), j(n) {}
	Trivial() = default;
	int j;
};

int main()
{
	Trivial a(5);
	Trivial b;
	b = a;
	std::cout << "std::is_trivial_v<Trivial>   : " << std::is_trivial_v<Trivial> << std::endl;
	std::cout << "std::is_trivial_v<NonTrivial> : " << std::is_trivial_v<NonTrivial> << std::endl;
}
