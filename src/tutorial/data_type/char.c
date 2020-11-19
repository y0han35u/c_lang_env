#include <stdio.h>

int main(void)
{
	char str[] = "PEACH";

	str[0] += 32;
	str[1] += 32;
	str[2] += 32;
	str[3] += 32;
	str[4] += 32;

	printf("str = %s\n", str);
	return 0;
}
