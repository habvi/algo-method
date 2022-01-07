#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> w(n);
	rep(i, n) cin >> w[i];
	
	int INF = 1001001;
	vector<vector<int>> dp(n + 1, vector<int> (m + 1, INF));
	dp[0][0] = 0;
	rep(i, n) for (int j = 0; j <= m; ++j) {
		if (dp[i][j] == INF) continue;
		if (j + w[i] <= m) dp[i + 1][j + w[i]] = min(dp[i + 1][j + w[i]], dp[i][j] + 1);
		dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
	}
	
	if (dp[n][m] != INF) cout << dp[n][m] << endl;
	else cout << -1 << endl;
}