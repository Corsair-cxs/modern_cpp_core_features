#include <compare>
struct Legacy {
	int n;
	bool operator==(const Legacy& rhs) const
	{
		return n == rhs.n;
	}
	bool operator<(const Legacy& rhs) const
	{
		return n < rhs.n;
	}
};

struct TreeWay {
	Legacy m;
	std::strong_ordering operator<=>(const TreeWay &) const = default;
};

int main()
{
    TreeWay t1, t2;
    bool r = t1 < t2;
}
