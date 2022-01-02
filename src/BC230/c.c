#include <stdio.h>

long long max(long long, long long);
long long min(long long, long long);

int main(void){
	long long n, a, b;
	long long p, q, r, s;
	long long x, y;
	long long i, j;

	scanf("%lld%lld%lld", &n, &a, &b);
	scanf("%lld%lld%lld%lld", &p, &q, &r, &s);

	char ans[(q-p+1)][(s-r+1)];

	for (i=0; i < (q-p+1); i++){
		for (j=0; j < (s-r+1); j++){
			ans[i][j] = '.';
		}
	}

	x = max(p-a, r-b);
	y = min(q-a, s-b);
	for (i = x; i <= y; i++)ans[a+i-p][b+i-r] = '#';

	x = max(p-a, b-s);
	y = min(q-a, b-r);
	for (i = x; i <= y; i++)ans[a+i-p][b-i-r] = '#';

	for (i = 0; i < (q-p+1); i++){
		for (j = 0; j < (s-r+1); j++){
			printf("%c", ans[i][j]);
		}
		printf("\n");
	}

	return 0;
}

long long max(long long a, long long b){
	return ((a > b)? a : b);
}

long long min(long long a, long long b){
	return ((a < b)? a : b);
}
