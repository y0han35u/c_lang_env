#include <stdio.h>

int main(void)
{
	char ope;
	int a, b;
	printf("Enter operator type>");
	scanf("%c", &ope);
	printf("Enter two of int\n");
	printf(">");
	scanf("%d", &a);
	printf(">");
	scanf("%d", &b);

	switch(ope) {
		case '+':
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a * b);
			break;
		case '/':
			if (!b) printf("DO NOT SELECT 0\n"); break;
			printf("%d\n", a / b);
			break;
		default:
			printf("ERROR");
			break;
	}
	
	return 0;
}
