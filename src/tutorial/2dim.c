#include <stdio.h>

int main(void)
{
	/*math, eng, phy */
	int score[][3] = { {89, 78, 23},
			   {98, 91, 89},
			   {78, 61, 51},
			   {56, 54, 99} };
	
	int sum[3];

	sum[0] = score[0][0] + score[1][0] + score[2][0] + score[3][0];
	sum[1] = score[0][1] + score[1][1] + score[2][1] + score[3][1];
	sum[2] = score[0][2] + score[1][2] + score[2][2] + score[3][2];

	printf("math = %d\n", sum[0]);
	printf("eng = %d\n", sum[1]);
	printf("phy = %d\n", sum[2]);

	return 0;
}

