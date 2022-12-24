class IntWrap {
public:
	IntWrap(int n) : n_(n) {}
	IntWrap operator+ (const IntWrap& other)
	{
		return IntWrap(n_ + other.n_);
	}
private:
	int n_;
};

int main() {
	sum2(IntWrap(1), IntWrap(2));	// 编译失败，IntWrap没有默认构造函数
}
