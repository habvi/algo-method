#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
	int n;
	cin >> n;
	vvi xy(n, vi(2));
	rep(i, n) cin >> xy[i][0] >> xy[i][1];
	
	vi usd(n);
	int now = 0;
	double ans = 0;
	rep(i, n - 1) {
		usd[now] = 1;
		double mn = 1001001001, b = 0;
		int k;
		rep(j, n) {
			if (usd[j]) continue;
			b = pow(xy[now][0] - xy[j][0], 2) + pow(xy[now][1] - xy[j][1], 2);
			if (b < mn) {
				mn = b;
				k = j;
			}
		}
		ans += sqrt(mn);
		now = k;
	}
	
	ans += sqrt(pow(xy[0][0] - xy[now][0], 2) + pow(xy[0][1] - xy[now][1], 2));
	cout << ans << endl;
}