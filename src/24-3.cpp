#include <string>
#include <utility>
class CIString2 {
public:
	CIString2(const char* s) : str_(s) {}

	bool operator < (const CIString2& b) const {
		return ci_compare(str_.c_str(), b.str_.c_str()) < 0;
	}
private:
	std::string str_;
};

using namespace std::rel_ops;

int main()
{
    CIString2 s1{ "hello" }, s2{ "world" };
    bool r = s1 >= s2;
}
