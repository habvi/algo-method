#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n; cin >> n;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	vector<vector<int>> dp(n, vector<int> (n));
	dp[0][0] = 1;
	rep(i, n) rep(j, n) {
		if (j+1 < n && s[i][j+1] == '.') dp[i][j+1] += dp[i][j];
		if (i+1 < n && s[i+1][j] == '.') dp[i+1][j] += dp[i][j];
	}

	cout << dp[n-1][n-1] << endl;
}