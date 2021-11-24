#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m; cin >> n >> m;
	vector<int> w(n), v(n);
	rep(i, n) cin >> w[i];
	rep(i, n) cin >> v[i];
	
	vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
	dp[0][0] = 0;
	rep(i, n) for (int j = 0; j <= m; ++j) {
		if (dp[i][j] < 0) continue;
		dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
		if (j+w[i] <= m) dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j] + v[i]);
	}
	
	int ans = 0;
	for (int j = 0; j <= m; ++j) ans = max(ans, dp[n][j]);
	cout << ans << endl;
}