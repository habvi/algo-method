#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	vector<vector<int>> dp(n+1, vector<int> (m+1));
	dp[0][0] = 1;
    int MOD = 1000;
	rep(i, n) rep(j, m+1) {
		dp[i+1][j] += dp[i][j];
		if (j-a[i] >= 0) dp[i+1][j] += dp[i][j-a[i]];
        dp[i+1][j] %= MOD;
	}

	cout << dp[n][m]%MOD << endl;
}