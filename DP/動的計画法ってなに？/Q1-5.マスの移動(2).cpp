#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	vector<int> dp(n, 100100100);
	dp[0] = 0;
	for (int i = 1; i < n; ++i)
		for (int j = 0; j < min(m, i); ++j){
			dp[i] = min(dp[i], dp[i-j-1] + a[i]*(j+1));
		}
	cout << dp[n-1] << endl;
}