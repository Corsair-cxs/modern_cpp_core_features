template <class T> concept not_sad = !sad<T>;
template <class T> int f2(T) requires (not_sad<T>) { return 3; };
template <class T> int f2(T) requires (not_sad<T>) && true  { return 4; };

f2(0);
