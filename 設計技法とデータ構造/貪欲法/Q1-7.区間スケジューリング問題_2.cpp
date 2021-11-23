#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;
using vvi = vector<vi>;
using P = pair<int, int>;

int main() {
	int n; cin >> n;
	vector<P> s(n);
	rep(i, n) cin >> s[i].first >> s[i].second;

	sort(s.begin(), s.end(), [&](P x, P y) {
		return x.second < y.second;
	});

	int now = 0, ans = 0;
	rep(i, n) {
		if (now <= s[i].first) {
			++ans;
			now = s[i].second;
		}
	}

	cout << ans << endl;
}