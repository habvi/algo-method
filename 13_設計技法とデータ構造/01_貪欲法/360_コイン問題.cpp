#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;

int main() {
	int n, a0, a1, a2, a3;
	cin >> n >> a0 >> a1 >> a2 >> a3;
	vi a = {a0, a1, a2, a3}, k = {50, 10, 5, 1};
	int ans = 0;
	rep(i, 4) {
		int m = 0;
		m = min(n / k[i], a[i]);
		ans += m;
		n -= k[i] * m;
	}
	
	cout << ans << endl;
}