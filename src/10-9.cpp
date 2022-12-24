struct type 
{
	~type() = delete;
};
type global_var;			// 编译失败，析构函数被删除无法隐式调用

int main()
{
	static type static_var;	// 编译失败，析构函数被删除无法隐式调用
	type auto_var;			// 编译失败，析构函数被删除无法隐式调用
	type *var_ptr = new type;
	delete var_ptr;			// 编译失败，析构函数被删除无法显式调用
}
