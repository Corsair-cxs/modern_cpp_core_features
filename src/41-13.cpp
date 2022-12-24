template <class T>
concept Check = requires(T a, T b) {
	{a.clear()} noexcept;
	{a + b} noexcept -> std::same_as<int>;
};
