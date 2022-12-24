template<class T1, class T2>
auto sum1(T1 t1, T2 t2)->decltype(t1 + t2)
{
	return t1 + t2;
}

int main() {
	auto x1 = sum1(4, 2);
}
