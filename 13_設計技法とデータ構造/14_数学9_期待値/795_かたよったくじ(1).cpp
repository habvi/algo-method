#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, 0, n) cin >> A[i];

    double total = 0;
    for (auto a: A) total += a;
    cout << total / n << endl;
}