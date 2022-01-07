#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	
	int INF = 1001001001;
	vector<vector<int>> dp(n+1, vector<int> (m+1, INF));
	dp[0][0] = 0;
	rep(i, n) rep(j, m+1) {
		if (j-a[i] >= 0) dp[i+1][j] = min(dp[i][j], dp[i][j-a[i]] + 1);
		else dp[i+1][j] = dp[i][j];
	}
	
	if (dp[n][m] != INF) cout << dp[n][m] << endl;
	else cout << -1 << endl;
}