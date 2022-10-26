#include <stdbool.h>

bool is_uppercase(const char *source)
{
	int i;
	i = 0;

	while (source[i])
	{
		if (source[i] >= 'a' && source[i] <= 'z')
      return false;
		i++;
	}
	return true;
}

int main(void)
{
	is_uppercase("VG> ;{ P^9*K D{{|5  ; QHI2/R");
	return(0);
}

