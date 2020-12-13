#include <stdio.h>

int main(void) {
	int n, sum, i, j, k;
	scanf("%d %d", &n, &sum);

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= (n-i); j++) {
			k = (n-i-j);
			if ((10000*i + 5000*j + 1000*k) == sum) goto OUT;
		}
	     /*	printf("%d\n", k);*/
	}
	printf("-1 -1 -1\n");
	return 0;

OUT:
	printf("%d %d %d\n", i, j, k);
	return 0;
}

/* "k" commented out in the 1st forloop will print 0 Because "k=(n-i-j)" is out of scope.*/
