#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    int INF = 1001001001;
    vector<vector<int>> dp(n+1, vector<int> (m+1, INF));
    dp[0][0] = 0;
    rep(i, n) rep(j, m+1) {
        dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        if (j-a[i] >= 0) dp[i+1][j] = min(dp[i+1][j], dp[i][j-a[i]] + 1);
    }
    
    if (dp[n][m] <= k) cout << "Yes" << endl;
    else cout << "No" << endl;
}