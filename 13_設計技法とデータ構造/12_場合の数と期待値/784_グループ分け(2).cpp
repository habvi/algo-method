#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, m;
    cin >> n >> m;

    int total = n + m - 1;
    long long ans = 1;
    rep(i, 0, n) ans *= total - i;
    rep(i, 0, n) ans /= i + 1;

    cout << ans << endl;
}