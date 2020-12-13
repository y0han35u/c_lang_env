#include <stdio.h>
#include <stdlib.h>

int compare_num(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}	

int main(void) {
	int n, ans;
	scanf("%d", &n);
	int a[n+1], i;

	for (i = 0; i < n; i++) scanf("%d", a+i);

	qsort(a, n + 1, sizeof(a[0]), compare_num);

	for (i = 0, ans = n; i < n; i++) {
		if (a[i] == a[i+1]) ans--;
	}

	printf("%d\n" , ans);

	return 0;
}
