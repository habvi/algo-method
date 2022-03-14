#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, 0, n) cin >> A[i];

    double total = accumulate(A.begin(), A.end(), 0);

    cout << fixed << setprecision(10);
    cout << total / n << endl;
}