enum School {
  principal,
  teacher,
  student
};

enum Company {
  chairman,
  manager,
  employee
};

int main()
{
  School x = student;
  Company y = manager;
  bool b = student >= manager;	// 不同类型之间的比较操作
  b = x < employee;
  int y = student;				// 隐式转换为int
}
