#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, ans = 0;
    cin >> n;
    rep(i, 1, 7) rep(j, 1, 7) {
        if (i + j == n) ans++;
        }
    cout << ans << endl;
}