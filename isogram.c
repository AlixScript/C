#include <stdbool.h>

bool IsIsogram(const char *string)
{
        int i;
        int j;
        i = 0;

        if (string == "")
                return true;
        while (string[i] && (string[i] == ' ' || (string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')))
        {
                j = i + 1;
                while (string[j])
                {
                        if (string[i] >= 'A' && string[i] <= 'Z')
                        {
                                if ((string[i] == string[j]) || ((string[i] + 32) == string[j]))
                                        return false;
                        }
                        if (string[i] >= 'a' && string[i] <= 'z')
                        {
                                if ((string[i] == string[j]) || ((string[i] - 32) == string[j]))
                                        return false;
                        }
                  j++;
                }
                i++;    
                if (string[i] == '\0')
                        return true;
        }
        return false;
}


int main(void)
{
	IsIsogram(" "); //true
	IsIsogram("Test9");
	IsIsogram("RexAZ"); //true
	IsIsogram("aA");
	return 0;
}
