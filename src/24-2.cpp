#include <compare>
#include <string>

int ci_compare(const char* s1, const char* s2)
{
	while (tolower(*s1) == tolower(*s2++)) {
		if (*s1++ == '\0') {
			return 0;
		}
	}
	return tolower(*s1) - tolower(*--s2);
}

class CIString {
public:
	CIString(const char *s) : str_(s) {}

	std::weak_ordering operator<=>(const CIString& b) const {
		return ci_compare(str_.c_str(), b.str_.c_str()) <=> 0;
	}
private:
	std::string str_;
};

int main()
{
    CIString s1{ "HELLO" }, s2{"hello"};
    std::cout << (s1 <=> s2 == 0); // 输出为true
}

