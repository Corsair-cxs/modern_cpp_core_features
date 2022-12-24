int get_index0()
{
    return 0;
}

int get_index1()
{
    return 1;
}

int get_x_size()
{
    return 5 + 8;
}

int get_y_size()
{
    return 6 + 7;
}

const int index0 = get_index0();
#define index1 get_index1()

switch (argc)
{
case  index0:
    std::cout << "index0" << std::endl;
    break;
case index1:
    std::cout << "index1" << std::endl;
    break;
default:
    std::cout << "none" << std::endl;
}

const int x_size = get_x_size();
#define y_size get_y_size()
char buffer[x_size][y_size] = { 0 };

enum {
    enum_index0 = index0,
    enum_index1 = index1,
};

std::tuple<int, char> tp = std::make_tuple(4, '3');
int x1 = std::get<index0>(tp);
char x2 = std::get<index1>(tp);
