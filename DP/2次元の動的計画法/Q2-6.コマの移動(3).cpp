#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n, vector<int> (n));
	rep(i, n) rep(j, n) cin >> a[i][j];

	vector<vector<int>> dp(n, vector<int> (n, 0));
	dp[0][0] = a[0][0];
	rep(i, n) rep(j, n) {
		if (j+1 < n) dp[i][j+1] = max(dp[i][j+1], dp[i][j] + a[i][j+1]);
		if (i+1 < n) dp[i+1][j] = max(dp[i+1][j], dp[i][j] + a[i+1][j]);
	}

	cout << dp[n-1][n-1] << endl;
}