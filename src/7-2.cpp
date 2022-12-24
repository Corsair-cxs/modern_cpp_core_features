int x = 0;

int main()
{
    int y = 0;
    static int z = 0;
    auto foo = [x, y, z] {};
}
