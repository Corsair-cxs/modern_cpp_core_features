sum(double arg)
{
  return arg;
}

sum(double arg0, double args1)
{
  return arg0 + sum(args1);
}

sum(int arg1, double args1, double args2)
{
  return arg1 + sum(args1, args2);;
}

int main()
{
	std::cout << sum(1, 5.0, 11.7) << std::endl;
}
