#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

// nCr
int choose(int n, int r){
    int res = 1;
    rep(i, 0, r) res *= n - i;
    rep(i, 0, r) res /= i + 1;
    return res;
}

int main() {
    int n;
    cin >> n;

    rep(i, 0, n + 1) {
        double ans = choose(n, i);
        ans /= pow(2, n);

        cout << fixed << setprecision(10);
        cout << ans << endl;
    }
}