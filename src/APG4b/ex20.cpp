#include <bits/stdc++.h>
using namespace std;

int recursive(vector<vector<int>> &children, int x);

int main() {
	int n;
	cin >> n;

	vector<int> p(n);
	p.at(0) = -1;
	for (int i = 1; i < n; i++) cin >> p.at(i);

	vector<vector<int>> children(n);
	for (int i = 1; i < n; i++) {
		int parent = p.at(i);
		children.at(parent).push_back(i);
	}

	for (int i = 0; i < n; i++) {
		cout << recursive(children, i) << endl;
	}
}

int recursive(vector<vector<int>> &children, int x) {
	if (children.at(x).size() == 0) return 1;

	int sum = 0;
	for (int i : children.at(x)) sum += recursive(children, i);
	return sum+=1;
}

