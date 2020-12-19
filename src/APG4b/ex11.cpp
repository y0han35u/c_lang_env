#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, i;
	cin >> n >> a;

	for (i = 1; i <= n; i++) {
		char op;
		int b;
		cin >> op >> b;

		switch(op) {
			case '+':
				a += b;
				cout << i << ':' << a << endl;
				break;
			case '-':
				a -= b;
				cout << i << ':' << a << endl;
				break;
			case '*':
				a *= b;
				cout << i << ':' << a << endl;
				break;
			case '/':
				if (!b) {
				       	printf("error\n");
				       	return 0;
				}
				a /= b;
				cout << i << ':' << a << endl;
				break;
			default:
				printf("error\n");
		}
	}
	return 0;
}




