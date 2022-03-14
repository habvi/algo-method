#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, m;
    cin >> n >> m;

    long double ex = 0;
    vector<int> A(n), P(n);
    rep(i, 0, n) {
        cin >> A[i] >> P[i];
        ex += A[i] * P[i] / 100.0;
    }

    long double ey = 0;
    vector<int> B(m), Q(m);
    rep(i, 0, m) {
        cin >> B[i] >> Q[i];
        ey += B[i] * Q[i] / 100.0;
    }

    cout << fixed << setprecision(10);
    cout << ex * ey << endl;
}