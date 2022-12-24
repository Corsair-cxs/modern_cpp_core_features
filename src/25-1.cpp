struct X {
	thread_local static int i;
};

thread_local X a;

int main()
{
	thread_local X b;
}
