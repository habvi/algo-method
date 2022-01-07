#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    cout << (s[a][b] == 'o' ? "Yes" : "No") << endl;
}