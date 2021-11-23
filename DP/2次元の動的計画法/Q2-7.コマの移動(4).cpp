#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n, vector<int> (n));
	rep(i, n) rep(j, n) cin >> a[i][j];

	int INF = 1001001001;
	vector<vector<int>> dp(n, vector<int> (n, INF));
	dp[0][n-1] = a[0][n-1];
	rep(i, n) rep(j, n) {
		int k = n-j-1;
		if (k-1 >= 0) dp[i][k-1] = min(dp[i][k-1], dp[i][k] + a[i][k-1]);
		if (i+1 < n) dp[i+1][k] = min(dp[i+1][k], dp[i][k] + a[i+1][k]);
	}

	cout << dp[n-1][0] << endl;
}