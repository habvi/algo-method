#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
	int n, a, b, c;
    cin >> n >> a >> b >> c;

    long long ans = 1;
    rep(i, 0, a) ans *= n - i;
    rep(i, 0, a) ans /= i + 1;

    rep(i, 0, b) ans *= n - a - i;
    rep(i, 0, b) ans /= i + 1;

    cout << ans << endl;
}