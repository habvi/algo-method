#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define _GLIBCXX_DEBUG
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
	int n; cin >> n;
	vi a = {5, 1};
	int cnt = 0;
	for (auto i:a) {
		cnt += n/i;
		n %= i;
	}

	cout << cnt << endl;
}