#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n, vector<int> (3));
	rep(i, n) rep(j, 3) cin >> a[i][j];

	vector<vector<int>> dp(n, vector<int> (3));
	rep(i, 3) dp[0][i] = a[0][i];
    for (int i = 1; i < n; ++i) {
        dp[i][0] = max(dp[i-1][1] + a[i][0], dp[i-1][2] + a[i][0]);
        dp[i][1] = max(dp[i-1][0] + a[i][1], dp[i-1][2] + a[i][1]);
        dp[i][2] = max(dp[i-1][0] + a[i][2], dp[i-1][1] + a[i][2]);
	}

	int ans = 0;
	rep(i, 3) ans = max(ans, dp[n-1][i]); 
	cout << ans << endl;
}