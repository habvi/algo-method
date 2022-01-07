#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
  if (y == 0) return x;
  else return gcd(y, x % y);
}

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll g = gcd(abs(c - a), abs(d - b));
	cout << g - 1 << endl;
}