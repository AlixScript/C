#include <stddef.h>

size_t get_count(const char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!((s[i] >= 'a' && s[i] <= 'z') || s[i] == ' '))
			return count;
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' 
			|| s[i] == 'o'|| s[i] == 'u')
			count++;
		i++;
	}
    	return count;
}

int main(void)
{
	get_count("aeo"); //3
	get_count("abcd efAp"); //2
	get_count("aei ouy"); //5
	return 0;
}
