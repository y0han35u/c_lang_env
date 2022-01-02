#include <stdio.h>
#include <string.h>

int main() {
	char s[11];
	char t[][3] = {"xxo", "xox", "oxx"};
	scanf("%s",s);
	for (int i=0; i < sizeof(t)/sizeof(t[0]); i++) {
		int flag = 1;
		for (int j=0; j < strlen(s); j++) {
			if (t[i][j % 3] != s[j]) flag = 0;
		}
		if (flag) {
			printf("Yes");
			return 0;
		}
	}
	printf("%s","No");
	return 0;
}
