#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    rep(i, 0, n) cin >> A[i];
    rep(i, 0, n) cin >> B[i];

    int total = 0;
    double num = 0.0;
    rep(i, 0, n) {
        total += A[i] * B[i];
        num += B[i];
    }

    cout << fixed << setprecision(10);
    cout << total / num << endl;
}