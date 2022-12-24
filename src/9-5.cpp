int x = 999;
const int y = 999;
const int z = 99;
const double cdb = 99.9;
double db = 99.9;
char c1 = x;  // 编译成功，传统变量初始化支持隐式缩窄转换
char c2{ x }; // 编译失败，可能是隐式缩窄转换，对应规则4
char c3{ y }; // 编译失败，确定是隐式缩窄转换，999超出char能够适应的范围，对应规则4
char c4{ z }; // 编译成功，99在char能够适应的范围内，对应规则4
unsigned char uc1 = { 5 };  // 编译成功，5在unsigned char能够适应的范围内，对应规则4
unsigned char uc2 = { -1 }; // 编译失败，unsigned char不能够适应负数，对应规则4
unsigned int ui1 = { -1 };  //编译失败，unsigned int不能够适应负数，对应规则4
signed int si1 = { (unsigned int)-1 }; //编译失败，signed int不能够适应-1所对应的unsigned int，通常是4294967295，对应规则4
int ii = { 2.0 }; // 编译失败，int不能适应浮点范围，对应规则1
float f1{ x };    // 编译失败，float可能无法适应整数或者互相转换，对应规则3
float f2{ 7 };    // 编译成功，7能够适应float，且float也能转换回整数7，对应规则3
float f3{ cdb };  // 编译成功，99.9能适应float，对应规则2
float f4{ db };   // 编译失败，可能是隐式缩窄转无法表达double，对应规则2
