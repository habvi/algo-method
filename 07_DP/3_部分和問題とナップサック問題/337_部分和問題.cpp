#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> w(n);
	rep(i, n) cin >> w[i];
	
	vector<bool> dp(m + 5);
	dp[0] = true;
	rep(i, n) for (int j = m; j >= 0; --j) {
		if (!dp[j]) continue;
		if (j + w[i] < m + 1) dp[j + w[i]] = true;
	}
	
	if (dp[m]) cout << "Yes" << endl;
	else cout << "No" << endl;
}