#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> dp(n);
    dp[0] = x;
    dp[1] = y;
    for (int i = 0; i < n - 2; ++i){
        dp[i + 2] = dp[i] + dp[i + 1];
        dp[i + 2] %= 100;
    }
    cout << dp[n - 1] << endl;
}