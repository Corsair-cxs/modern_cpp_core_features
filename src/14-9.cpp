enum class Color1 : char {};
enum Color2 : short {};

int main()
{
	Color1 c{ 7 };
	Color2 c1{ 11 };
	Color2 c2 = Color2{ 5 };
}
