#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(int x, vector<ll>& fib){
	if (fib[x] != -1) return fib[x];
	fib[x] = f(x - 1, fib) + f(x - 2, fib);
	return fib[x];
}

int main() {
	int n;
	cin >> n;
	vector<ll> fib(n + 1, -1);
	fib[0] = 0;
	fib[1] = 1;
	f(n, fib);
	cout << fib[n] << endl;
}