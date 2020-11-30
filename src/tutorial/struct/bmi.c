#include <stdio.h>
#include <string.h>

typedef struct {
	double height;
	double weight;
	double bmi;
	char name[10];
} Data;

void openning();
void get_data(Data *p);

int main(void)
{
	int num;
	Data data[3];
	get_data(data);
	openning();

	for (;;) {
		printf("enter your number >");
		scanf("%d", &num);

		switch (num) {
			case 0:
				printf("\nname: %s0\nheight: %0.1f\nweight: %0.1f\nBMI: %0.1f\n",
						data[0].name, data[0].height, data[0].weight, data[0].bmi);
				break;
			case 1:
				printf("\nname: %s1\nheight: %0.1f\nweight: %0.1f\nBMI: %0.1f\n",
						data[1].name, data[1].height, data[1].weight, data[1].bmi);
				break;
			case 2:
				printf("\nname: %s2\nheight: %0.1f\nweight: %0.1f\nBMI: %0.1f\n",
						data[2].name, data[2].height, data[2].weight, data[2].bmi);
				break;
			default:
				printf("error: enter 0, 1, 2 only\n");
				break;
		}
	}
	return 0;
}

void openning(void)
{
	printf("get BMI\n");
	printf("john0: 0\njohn1: 1\njohn2: 2\n");
}

void get_data(Data *p)
{
	for (int i = 0; i < 3; i++) {
		(p+i)->height = 1.7 + i;
		(p+i)->weight = 70.6 + i;
		(p+i)->bmi = (70.6 + i) / ((1.7 + i) * (1.7 + i));
		strcpy((p+i)->name, "john");
	}
}

