#include <stdio.h>

int main(void)
{
	int i, j, k, l;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}

	for (k = 4; k > 0; k--) {
		for (l = 1; l <= k; l++) {
		       printf("%d", k);
	        }	 
	        printf("\n");
	}
        return 0;
}

