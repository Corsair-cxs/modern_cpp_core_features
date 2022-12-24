template <SignedIntegerType T>
struct X {};

template <IntegerFloatingType T>
struct Y {};

X<int> x1; 		    // 编译成功
X<unsigned int> x2; // 编译失败

Y<int> y1; 	    // 编译成功
Y<double> y2; 	// 编译成功
