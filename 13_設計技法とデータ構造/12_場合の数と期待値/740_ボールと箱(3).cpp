#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
using ll = long long;

// nCm * m!
long long solve1(int n, int m, ll ans){
    rep(i, 0, m) {
        ans *= n - i;
        ans /= i + 1;
    }
    rep(i, 0, m) ans *= m - i;
    return ans;
}

// nPm
long long solve2(int n, int m, ll ans){
    rep(i, 0, m) ans *= n - i;
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    ll ans = 1;

    cout << solve1(n, m, ans) << endl;
    // cout << solve2(n, m, ans) << endl;
}