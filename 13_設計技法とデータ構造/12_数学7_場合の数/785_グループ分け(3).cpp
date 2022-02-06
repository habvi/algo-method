#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, m;
    cin >> n >> m;

    long long ans = 1;

    if (n - m < 0) {
        cout << 0 << endl;
        return 0;
    }

    int total = n - m + m - 1;
    rep(i, 0, m - 1) ans *= total - i;
    rep(i, 0, m - 1) ans /= i + 1;

    cout << ans << endl;
}