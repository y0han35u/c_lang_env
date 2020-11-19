#include <stdio.h>

int main(void)
{
	int weight, height, rohrer;

	printf("Enter your weight >");
	scanf("%d", &weight);
	printf("Enter your height >");
	scanf("%d", &height);

	rohrer = (weight * 10000000) / (height * height * height);

	printf("rohrer index = %d\n", rohrer);

	if (rohrer < 100) {
		printf("too thin\n");
	}
	else if (rohrer >= 100 && rohrer < 115) {
		printf("thin\n");
	}
	else if (rohrer >= 115 && rohrer < 145) {
		printf("normal\n");
	}
	else if (rohrer >= 145 && rohrer < 160) {
		printf("fat\n");
	}
	else {
		printf("too fat\n");
	}

	return 0;
}

