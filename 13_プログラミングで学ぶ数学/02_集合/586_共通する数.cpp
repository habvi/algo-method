#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m);
    rep(i, 0, n) cin >> A[i];
    rep(i, 0, m) cin >> B[i];

    for (auto a: A) {
        for (auto b: B) {
            if (a == b) cout << a << endl;
        }
    }
}