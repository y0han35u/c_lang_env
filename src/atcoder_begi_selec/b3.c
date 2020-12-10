#include <stdio.h>

int main(void) {
	int n, a, b, ans=0, j;
	scanf("%d%d%d", &n, &a, &b);

	for (int i = 1; i <= n; i++) {
		int s = 0;
		for (j = i; j; j/=10) s += j%10;
		if (s >= a && s <= b) ans += i;
			
	}
	printf("%d\n", ans);
	return 0;
}

/* infinite loop will occur in case you replase j/=10 to j/10 in the 9th line. */
