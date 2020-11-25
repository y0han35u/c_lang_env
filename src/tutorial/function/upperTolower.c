#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int str;
	
	while (1) {
		printf("Enter your lower case letter >");
		str = getchar();
		if (!islower(str)) {
			printf("error: enter lower case\n");
			continue;
		}
		str = toupper(str);
		putchar(str);
	}
	return 0;
}

