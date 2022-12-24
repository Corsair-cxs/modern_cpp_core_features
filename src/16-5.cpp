class Base final {
public:
	virtual void foo(int x) {}

};

class Derived : public Base {
public:
	void foo(int x) {};
};
