#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n), b(n);
	rep(i, n) cin >> a[i] >> b[i];
	
	int INF = 1001001001;
	vector<vector<int>> dp(n+1, vector<int>(m+1, INF));
	dp[0][0] = 0;
	rep(i, n) rep(j, m+1) {
		if (dp[i][j] != INF) dp[i+1][j] = 0;
		if (j-a[i] >= 0) {
			if (dp[i][j-a[i]] != INF)
				dp[i+1][j] = min(dp[i+1][j], 1);
			if (dp[i+1][j-a[i]] < b[i])
				dp[i+1][j] = min(dp[i+1][j], dp[i+1][j-a[i]] + 1);
		}
	}
	
	if (dp[n][m] != INF) cout << "Yes" << endl;
	else cout << "No" << endl;
}