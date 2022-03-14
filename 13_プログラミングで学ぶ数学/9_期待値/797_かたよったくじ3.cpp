#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int m;
    cin >> m;
    vector<int> A(m), P(m);
    rep(i, 0, m) cin >> A[i] >> P[i];

    int total = 0;
    rep(i, 0, m) total += A[i] * P[i];

    double ans = total / 100.0;

    cout << fixed << setprecision(10);
    cout << ans << endl;
}