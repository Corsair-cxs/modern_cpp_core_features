#include <iostream>
void f(int(&)[])
{
	std::cout << "call f(int(&)[])";
}
void f(int(&)[1])
{
	std::cout << "call f(int(&)[1])";
}
int arr[1];

int main()
{
	f(arr);
}
