#include <stdio.h>
#include <string.h>

void replace(char t[8], char *s) {
	int l = strlen(t), n, p;
	int r = strlen(s);

	for (p = 0; p <= r-l; p++) {
		for (n = 0; n < l; n++) {
			if (t[n] != s[n+p]) goto OUT;
		}

		for (n = 0; n < l; n++) {
			s[n+p] = 'X';
		}
OUT:
		continue;
	}
}

char T[4][8] = {"eraser", "erase", "dreamer", "dream"};

int main(void) {
	int i, j;
	char s[100001];
	scanf("%s", s);
	
	for (i = 0; i < 4; i++) replace(T[i], s);

	for (j = 0; j < strlen(s); j++) {
		if(!(s[j] == 'X')) {
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");
	return 0;

}
	

