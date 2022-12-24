int x = 1;

int get_val()
{
	return x;
}

void set_val(int val)
{
	x = val;
}

int main() 
{
	x++;
	++x;
	int y = get_val();
	set_val(6);
}
