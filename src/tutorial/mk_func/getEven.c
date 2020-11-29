#include <stdio.h>
#define N 10

int even_num(int *even, int n, int *li);

int main(void)
{
	int li[N];
	int even[N], n;

	printf("Enter %d numbers >", N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &li[i]);
	}

	n = even_num(even, N, li);
	printf("%d\n", n);

	printf("\neven number:");
	for (int j = 0; j < n; j++) {
		printf("%d ", even[j]);
	}
	printf("\n");

	return 0;
}

int even_num(int *even, int n, int *li)
{
	int j, k;
	for (j = 0, k = 0; j < n; j++) {
		if (*(li + j) % 2 == 0) {
			*(even + k) = *(li + j);
			k++;
		}
	}
	return k;
}

