class Trivial
{
	int i;
public:
	Trivial(int n) : i(n), j(n) {}
	Trivial() {}
	int j;
};

int main()
{
	Trivial a(5);
	Trivial b;
	b = a;
	std::cout << "std::is_trivial_v<Trivial>   : " 
<< std::is_trivial_v<Trivial> << std::endl;
}
