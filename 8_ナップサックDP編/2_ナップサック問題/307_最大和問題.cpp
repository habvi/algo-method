#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	vector<int> dp(n + 1);
	for (int i = 0; i < n; ++i){
		dp[i + 1] = max(dp[i + 1], dp[i] + a[i]);
		dp[i + 1] = max(dp[i + 1], dp[i]);
	}
	cout << dp[n] << endl;
}