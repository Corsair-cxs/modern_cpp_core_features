#include <type_traits>
template<class T> bool is_same_value(T a, T b)
{
	if constexpr (std::is_same<T, double>::value) {
		if (std::abs(a - b) < 0.0001) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return a == b;
	}
}
