class SomeString {
public:
	SomeString(const char * p) : str_(_strdup(p)) {}
	explicit SomeString(int alloc_size) : str_((char *)malloc(alloc_size)) {}
	~SomeString() { free(str_); }
private:
	char *str_;
	friend void PrintStr(const SomeString& str);
};

int main()
{
	PrintStr("hello world");
PrintStr(58);               // 编译失败
	PrintStr(SomeString(58));
}
