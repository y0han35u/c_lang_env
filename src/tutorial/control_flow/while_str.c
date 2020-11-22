#include <stdio.h>

int main(void)
{
	char str[3][12] = {"happy", "serendipity", "smile"};
	int i = 0, n;

	while (i < 3) {
		for (n = 0; str[i][n] != '\0'; n++) {
			printf("%c ", str[i][n]);
		}

		printf("\n");
		i++;
	}
	return 0;
}


