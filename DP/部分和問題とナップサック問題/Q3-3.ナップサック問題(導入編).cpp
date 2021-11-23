#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n-1), b(n-1);
	for (int i = 0; i < n-1; ++i) cin >> a[i];
	for (int i = 0; i < n-1; ++i) cin >> b[i];

	vector<vector<int>> dp(n, vector<int> (m, -1));
	dp[0][0] = 0;
	for (int i = 0; i < n-1; ++i) rep(j, m) {
		if (dp[i][j] < 0) continue;
		dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
		if (j+a[i] < m) dp[i+1][j+a[i]] = max(dp[i+1][j+a[i]], dp[i][j] + b[i]);
	}

	cout << dp[n-1][m-1] << endl;
}