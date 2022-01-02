#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	if(a >= 42) a++;
	printf("%s%03d\n","AGC",a);
	return 0;
}
