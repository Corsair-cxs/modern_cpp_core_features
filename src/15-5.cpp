#include <iostream>
#include <string>

class BaseData {
	int data_;
public:
	int Get() { return data_; }
protected:
	BaseData() : data_(11) {}
};

class DerivedData : public BaseData {
public:
};

int main()
{
	DerivedData d{};
	std::cout << d.Get() << std::endl;
}
