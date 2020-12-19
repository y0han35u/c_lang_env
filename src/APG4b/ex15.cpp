#include <bits/stdc++.h>
using namespace std;

vector<int> input(int);
int vec_sum(vector<int>);

int main() {
	int n;
	cin >> n;

	vector<int> A = input(n);
	vector<int> B = input(n);
	vector<int> C = input(n);

	int A_sum = vec_sum(A);
	int B_sum = vec_sum(B);
	int C_sum = vec_sum(C);

	cout << A_sum * B_sum * C_sum << endl;
}

vector<int> input(int n) {
	vector<int> x(n);
	int i, c;
	for (i = 0; i < n; i++) {
		cin >> c;
		x.at(i) = c;
	}
	return x;
}

int vec_sum(vector<int> vec) {
	int i, sum = 0;
	for (i = 0; i < vec.size(); i++) {
		sum += vec.at(i);
	}
	return sum;
}	





