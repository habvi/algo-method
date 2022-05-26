#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> d(m);
    rep(i, n) cin >> d[i];

    vector<int> dp(n + 1);
    dp[0] = 1;
    rep(i, n) rep(j, m) {
        if (dp[i] && i + d[j] <= n) dp[i + d[j]] = 1;
    }

    if (dp[n]) cout << "Yes" << endl;
    else cout << "No" << endl;
}