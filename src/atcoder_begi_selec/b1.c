#include <stdio.h>

int main(void) {
	int n, i;
	int pf, ans = 0;

	scanf("%d", &n);
	int num[n];

	for (i = 0; i < n; i++) {
		scanf("%d", num+i);
		for (pf = 0; !(num[i]%2); num[i]/=2) pf++;
		if (pf < ans || !i) ans = pf;
	}
	printf("%d\n", ans);
	return 0;
}

/* infinite loop will occurs in case you replace num[i]/=2 to num[i]/2 */  
