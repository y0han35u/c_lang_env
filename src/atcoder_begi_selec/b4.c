#include <stdio.h>
#include <stdlib.h>

int compare_num(const void *n1, const void *n2) {
	return *(int*)n2 - *(int*)n1;
}

int main(void) {
	int n, i, a[100];
	int ans = 0, swi = 1;

	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", a+i);

	qsort(a, n, sizeof(int), compare_num);

	for (i = 0; i < n; i++) {
		ans += swi * a[i];
		swi *= -1;
	}

	printf("%d\n", ans);
	return 0;
}

/*In the qsort func, 
 *it will not indicate the number of elements in the a[] to replace "n" to "sizeof(a) / sizeof(a[0])".
 *I don`t know why But I wanna know.
 */
