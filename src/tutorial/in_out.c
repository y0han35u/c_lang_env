#include <stdio.h>

int main(void)
{
	char name[20];
	int age;
	double weight;
	double height;

	printf("Enter your name >>");
	scanf("%19s", name);
	printf("Enter your age >>");
	scanf("%d", &age);
	printf("Enter your weight >>");
	scanf("%lf", &weight);
	printf("Enter your height >>");
	scanf("%lf", &height);

	printf("%-12s %4s %10s %10s\n", "name", "age", "weight", "height");
	printf("%-12s %4d %10.1f %10.1f\n", name, age, weight, height);

	return 0;
}
