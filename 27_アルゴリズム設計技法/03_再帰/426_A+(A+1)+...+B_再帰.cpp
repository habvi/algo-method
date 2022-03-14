#include <bits/stdc++.h>
using namespace std;

int f(int a, int b) {
	if (a == b) return a;
	return a + f(a + 1, b);
}

int main() {
	int a, b;
	cin >> a >> b;
	int ans = f(a, b);
	cout << ans << endl;
}