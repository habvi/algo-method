#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int m, k;
    cin >> m >> k;
    // cout << k << endl;
    // return 0;

    vector<int> A(m), P(m);
    rep(i, 0, m) cin >> A[i] >> P[i];

    double Ex = 0.0, Ey = 0.0;
    rep(i, 0, m) {
        Ex += A[i] * P[i] / 100.0;
        Ey += A[i] * k * P[i] / 100.0;
    }

    cout << fixed << setprecision(10);
    cout << Ey / Ex << endl;
}