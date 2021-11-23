#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < m; ++i) cin >> B[i];
    int ans = 0;
    for (auto& a: A) for (auto& b: B)
        if (a > b) ++ans;
    cout << ans << endl;
}