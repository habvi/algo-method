#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, m;
    cin >> n >> m;

    double ans = 0;

    vector<int> A(n), P(n);
    rep(i, 0, n) {
        cin >> A[i] >> P[i];
        ans += A[i] * P[i] / 100.0;
    }

    vector<int> B(m), Q(m);
    rep(i, 0, m) {
        cin >> B[i] >> Q[i];
        ans += B[i] * Q[i] / 100.0;
    }

    // rep(i, 0, n) {
    //     rep(j, 0, m) {
    //         ans += (A[i] + B[j]) * (P[i] / 100.0) * (Q[j] / 100.0);
    //     }
    // }

    cout << ans << endl;
}