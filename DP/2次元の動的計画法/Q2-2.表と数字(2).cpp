#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n; cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	vector<vector<int>> dp(n, vector<int> (n));
	rep(i, n) dp[0][i] = a[i];
	int MOD = 100;
	for (int i = 1; i < n; ++i) rep(j, n) {
		dp[i][j] += dp[i-1][j];
		if (j-1 >= 0) dp[i][j] += dp[i-1][j-1];
		if (j+1 < n) dp[i][j] += dp[i-1][j+1];
		dp[i][j] %= MOD;
	}

	cout << dp[n-1][n-1] << endl;
}