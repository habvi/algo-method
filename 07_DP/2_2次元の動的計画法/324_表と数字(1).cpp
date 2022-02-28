#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	vector<vector<int>> t(4, vector<int> (4));
	rep(i, 4) cin >> t[0][i];
	for (int i = 1; i < 4; ++i) rep(j, 4) {
		t[i][j] += t[i - 1][j];
		if (j - 1 >= 0) t[i][j] += t[i - 1][j - 1];
		if (j + 1 < 4) t[i][j] += t[i - 1][j + 1];
	}
	
	cout << t[3][3] << endl;
}