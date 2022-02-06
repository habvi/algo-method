#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
	int n;
    cin >> n;

    long long ans = 1;
    rep(i, 0, n - 1) ans *= 9 - i;
    rep(i, 0, n - 1) ans /= i + 1;

    cout << ans << endl;
}