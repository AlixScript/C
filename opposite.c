#include <stdio.h>

float opposite(float num) {
	num = -1 * num;
	return num;
}

int main()
{
	opposite(-240);
	opposite(0);
	return 0;
}

/*
1: -1
14: -14
-34: 34
*/
