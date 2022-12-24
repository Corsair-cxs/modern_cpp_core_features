#include <iostream>
union alignas(256) X
{
	char a1;
	int a2;
	double a3;
};
int main(int argc, char *argv[])
{
	X *x = new X();
	std::cout << "x = " << x << std::endl;
}
