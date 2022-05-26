#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];

    int INF = 1001001001;
    vector<int> dp(n, INF);
    dp[0] = 0;
    for (int i = 1; i < n; ++ i) {
        dp[i] = min(dp[i], dp[i-1] + A[i]);
        if (i >= 2)
            dp[i] = min(dp[i], dp[i - 2] + 2 * A[i]);
    }
    cout << dp[n - 1] << endl;
}