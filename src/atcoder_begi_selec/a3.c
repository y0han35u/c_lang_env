#include <stdio.h>

int main(void) {
	int cnt, ans = 0;
	char s[4];

	scanf("%s", s);

	for (cnt = 0; s[cnt] != '\0'; cnt++) {
		if (s[cnt] == '1') {
			ans++;
		}
	}
	printf("%d\n", ans);

	return 0;
}

