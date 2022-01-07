#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    
    set<int> s;
    rep(i, 0, n) s.insert(a[i]);
    int sz = s.size();
    cout << sz * sz * sz << endl;
}