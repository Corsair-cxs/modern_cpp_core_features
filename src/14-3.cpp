enum E {
 e1 = 1,
 e2 = 2,
 e3 = 0xfffffff0
};

int main()
{
 bool b = e1 < e3;
 std::cout << std::boolalpha << b << std::endl;
}
