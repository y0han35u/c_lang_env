#include <stdio.h>

int main(void)
{
	char str[256], str2[256];
	int n, cnt = 0;

	while (gets(str) != NULL) {
		for (n = 0; str[n] != '\0'; n++) {
			str2[n - cnt] = str[n];
			if (str2[n] = ' ') {
				puts(str2);
				str2[0] = '\0';
				cnt = n;
			}
		}
	}
	return 0;
}



				
