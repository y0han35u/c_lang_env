#include <bits/stdc++.h>
using namespace std;

void check(vector<vector<int>> &t, int &cn, int &wn);

int main() {
	int cn, wn;
	cn = wn = 0;

	vector<vector<int>> ans(9, vector<int>(9));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> ans.at(i).at(j);
		}
	}

	check(ans, cn, wn);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << ans.at(i).at(j);
			if (j == 8) cout << endl;
			else cout << " ";
		}
	}

	cout << cn << endl << wn << endl;
}

void check(vector<vector<int>> &t, int &cn, int &wn) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (t.at(i).at(j) != (i+1) * (j+1)) {
				t.at(i).at(j) = (i+1)*(j+1);
				wn++;
			} else {
				cn++;
			}
		}
	}
}

