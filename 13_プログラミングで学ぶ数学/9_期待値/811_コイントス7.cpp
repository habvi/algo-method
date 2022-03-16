#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int P;
    cin >> P;

    cout << fixed << setprecision(10);

    double ans = 1;
    rep(i, 0, 10) {
        cout << ans * P / 100.0 << endl;
        ans *= (100 - P) / 100.0;
    }

}