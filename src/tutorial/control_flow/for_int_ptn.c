#include <stdio.h>

int main(void)
{
	int a, b, c, ans, cnt = 0;
	printf("Enter your answer >");
	scanf("%d", &ans);

	for (a = 0; a <= 9; a++) {
		for (b = 0; b <= 9; b++) {
			for  (c = 0; c <= 9; c++) {
				if (a + b + c == ans) {
					printf("{%d,%d,%d}\n", a, b, c);
					cnt++;
				}
			}
		}
	}

	printf("The number of answer = %d\n", cnt);

	return 0;
}
