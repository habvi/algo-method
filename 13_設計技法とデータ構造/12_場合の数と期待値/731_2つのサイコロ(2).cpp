#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int x, y, ans = 0;
    cin >> x >> y;

    rep(i, 1, 7) rep(j, 1, 7) {
        int sm = i + j;
        if (sm == x or sm == y) ans++;
    }
    cout << ans << endl;
}