#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int m;
    cin >> m;
    double total = 0, num = 0;
    rep(i, 0, m) {
        int a, c;
        cin >> a >> c;

        total += a * c;
        num += c;
    }

    cout << total / num << endl;
}