class Base {
public:
	virtual void some_func() {}
	virtual void foo(int x) {}
	virtual void bar() const {}
	void baz() {}
};

class Derived : public Base {
public:
	virtual void sone_func() override {}
	virtual void foo(int &x) override {}
	virtual void bar() override {}
	virtual void baz() override {}
};
