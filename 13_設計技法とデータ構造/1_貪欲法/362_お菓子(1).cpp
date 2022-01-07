#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	while (n > 0) {
		cnt += 1;
		if (n % 2 == 1) {
			n -= 1;
			continue;
		}
		else n /= 2;
	}
	
	cout << cnt << endl;
}