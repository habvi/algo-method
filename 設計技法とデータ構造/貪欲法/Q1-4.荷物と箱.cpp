#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
	int n, m; cin >> n >> m;
	vi a(n), b(m);
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	sort(a.begin(), a.end());
	
	int ans = 0, j = 0;
	rep(i, n) {
		while (j < m && b[j] < a[i]) ++j;
		if (j >= m) break;
		++j;
		++ans;
	}
	
	cout << ans << endl;
}