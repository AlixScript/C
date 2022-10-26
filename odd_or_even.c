const char *even_or_odd(int number)
{
	if ((number % 2) == 0)
		return "Even";
	return "Odd";
}

int main(void)
{
	even_or_odd(201);
	even_or_odd(0);
	even_or_odd(-30);
	return 0;
}

//odd = impair
