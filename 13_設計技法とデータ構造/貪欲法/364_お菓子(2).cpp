#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int main() {
	int n; cin >> n;
	int ans = 0;
	while (n) {
		if (n % 3 == 0) n /= 3;
		else --n;
		++ans;
	}
	
	cout << ans << endl;
}