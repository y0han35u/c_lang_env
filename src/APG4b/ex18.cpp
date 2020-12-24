#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	for (int i = 0; i < m; i++) cin >> a.at(i) >> b.at(i);

	vector<vector<char>> ans(n, vector<char>(n, '-'));

	for (int i = 0; i < m; i++) {
		ans.at(a.at(i)-1).at(b.at(i)-1) = 'o';
		ans.at(b.at(i)-1).at(a.at(i)-1) = 'x';
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ans.at(i).at(j);
			if (j == n-1) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}

}
