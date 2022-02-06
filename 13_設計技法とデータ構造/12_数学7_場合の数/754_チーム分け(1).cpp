#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    long long ans = 1;
    if (a > b) swap(a, b);

    rep(i, 0, a) ans *= n - i;
    rep(i, 0, a) ans /= i + 1;

    cout << ans << endl;
}