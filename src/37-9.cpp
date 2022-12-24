int h = 0;
void g() {}
namespace N {
	struct A {};
	template <class T> int f(T) { return 1; }
	template <class T> int g(T) { return 2; }
	template <class T> int h(T) { return 3; }
}
int x = f<N::A>(N::A());  // 编译成功，查找f没有找到任何定义，f被认为是模板
int y = g<N::A>(N::A());  // 编译成功，查找g找到一个函数，g被认为是模板
int z = h<N::A>(N::A());  // 编译失败
