#include <stdio.h>

int main(void)
{
	char str1[10], str2[10];
	int i = 0;

	printf("Enter your string >");
	scanf("%s", str1);

	do {
		str2[i] = str1[i];
	} while (str1[i++] != '\0');

	printf("str2 = %s\n", str2);

	return 0;
}
	

