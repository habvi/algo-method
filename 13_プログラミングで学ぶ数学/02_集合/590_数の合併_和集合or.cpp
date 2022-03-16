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

    set<int> s;
    for (auto a: A) s.insert(a);
    for (auto b: B) s.insert(b);

    for (auto ans: s) {
        cout << ans << endl;
    }
}