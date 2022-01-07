#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, sum = 0; cin >> n;
	vector<int> w(n);
	rep(i, n) {
		cin >> w[i];
		sum += w[i];
	}
	
	vector<vector<int>> dp(n+1, vector<int>(sum+5, 0));
	dp[0][0] = 1;
	rep(i, n) rep(j, sum+1) {
		if (!dp[i][j]) continue;
        dp[i+1][j+w[i]] = 1;
        dp[i+1][abs(j-w[i])] = 1;
	}
	
	int k = 0;
    while (!dp[n][k]) ++k;
    cout << k << endl;
}