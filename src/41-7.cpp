template <class T> concept sad = false;
template <class T> int f1(T) requires (!sad<T>) { return 1; };
template <class T> int f1(T) requires (!sad<T>) && true {return 2; };

f1(0); // 编译失败
