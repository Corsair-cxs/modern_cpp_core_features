class Base {
public:
	virtual void log(const char *) const {...}
	virtual void foo(int x) {}

};

class BaseWithFileLog : public Base {
public:
	virtual void log(const char *) const override final {...}
};

class Derived : public BaseWithFileLog {
public:
	void foo(int x) {};
};
