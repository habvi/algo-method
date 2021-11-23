#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
	int n; cin >> n;
	int ans = 0;
	while (n) {
		if (n%3 == 0) n /= 3;
		else --n;
		++ans;
	}

	cout << ans << endl;
}