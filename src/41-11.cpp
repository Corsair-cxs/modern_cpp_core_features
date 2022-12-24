template<typename T> concept C =
requires (T a, T b) {
	a + b;
};
