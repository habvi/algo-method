#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using vi = vector<int>;

bool f(int i, int j, vi &a) {
	if (i == 0) {
		if (j == 0) return true;
		return false;
	}
	bool fl = false;
	if (j >= a[i-1] && f(i-1, j-a[i-1], a)) fl = true;
	if (f(i-1, j, a)) fl = true;
	return fl;
}

int main() {
	int n, x; cin >> n >> x;
	vi a(n);
	rep(i, n) cin >> a[i];
	cout << (f(n, x, a) ? "Yes" : "No") << endl;
}