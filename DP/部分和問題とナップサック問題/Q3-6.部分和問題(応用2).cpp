#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, a, b; cin >> n >> a >> b;
	vector<int> x(n);
	rep(i, n) cin >> x[i];

	vector<vector<int>> dp(n+1, vector<int>(a, 0));
	dp[0][0] = 1;
	rep(i, n) rep(j, a) {
		if (!dp[i][j]) continue;
		int k = (j + x[i]) % a;
		if (k < a) dp[i+1][k] = 1;
		dp[i+1][j] |= dp[i][j];
	}

	if (dp[n][b]) cout << "Yes" << endl;
	else cout << "No" << endl;
}