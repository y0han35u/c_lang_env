#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20];

	printf("Enter string\n");
	scanf("%19s%19s", str1, str2);

	if (!strcmp(str1, str2)) {
		printf("correct\n");
	} else {
		printf("wrong\n");
	}
	return 0;
}
