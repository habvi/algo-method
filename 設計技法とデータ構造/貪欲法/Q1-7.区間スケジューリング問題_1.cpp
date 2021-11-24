#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
	int n; cin >> n;
	vvi s(n, vi(2));
	rep(i, n) cin >> s[i][1] >> s[i][0];
	sort(s.begin(), s.end());
	
	int now = 0, ans = 0;
	rep(i, n) {
		if (now <= s[i][1]) {
			++ans;
			now = s[i][0];
		}
	}
	
	cout << ans << endl;
}