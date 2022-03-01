#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n;
    cin >> n;
    vector<int> P(n);
    rep(i, 0, n) cin >> P[i];

    int total = 0;
    rep(i, 0, n) {
        total += (i + 1) * P[i];
    }

    cout << fixed << setprecision(10);
    cout << total / 100.0 << endl;
}