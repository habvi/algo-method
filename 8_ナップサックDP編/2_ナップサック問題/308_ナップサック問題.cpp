#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, W; cin >> n >> W;
	vector<int> w(n), v(n);
	rep(i, n) cin >> w[i] >> v[i];
    
    vector<vector<int>> dp(n+1, vector<int> (W+1));
    rep(i, n) rep(j, W+1){
        dp[i+1][j] = dp[i][j];
        if (j-w[i] >= 0)
            dp[i+1][j] = max(dp[i+1][j], dp[i][j-w[i]] + v[i]);
    }
    cout << dp[n][W] << endl;
}