#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n - 1);
	for (int i = 0; i < n - 1; ++i) cin >> a[i];
	
	vector<vector<int>> dp(n, vector<int> (m, 0));
	dp[0][0] = 1;
	for (int i = 0; i < n - 1; ++i) rep(j, m) {
		if (dp[i][j] == 0) continue;
		dp[i + 1][j] = 1;
		if (j + a[i] < m) dp[i + 1][j + a[i]] = 1;
	}
	
	int sum = accumulate(dp[n - 1].begin(), dp[n - 1].end(), 0);
	cout << sum << endl;
}