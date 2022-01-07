#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
using ll = long long;

int main() {
	int n, m;
    cin >> n >> m;
    ll ans = 1;
    rep(i, 0, m) {
        ans *= n;
        n--;
    }
    cout << ans << endl;
}