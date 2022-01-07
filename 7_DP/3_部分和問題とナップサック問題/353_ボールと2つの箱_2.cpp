#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, sum = 0;
	cin >> n;
	vector<int> w(n);
	rep(i, n) {
		cin >> w[i];
		sum += w[i];
	}
	
	vector<vector<int>> dp(n + 1, vector<int>(sum + 5, 0));
	dp[0][0] = 1;
	rep(i, n) rep(j, sum + 1) {
		if (!dp[i][j]) continue;
		if (j + w[i] <= sum) dp[i + 1][j + w[i]] = 1;
		dp[i + 1][j] |= dp[i][j];
	}
	
	int ans = 1001001001;
	rep(j, sum + 1) {
		if (dp[n][j]) ans = min(ans, abs((sum - j) - j));
	}
	cout << ans << endl;
}