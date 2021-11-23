#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> A(n);
	rep(i, m) {
		int a, b;
		cin >> a >> b;
		A[a].push_back(b);
	}

	for (vector<int> x:A){
		sort(x.begin(), x.end());
		for (int y:x) {
			cout << y << " ";
		}
		cout << endl;
	}
}