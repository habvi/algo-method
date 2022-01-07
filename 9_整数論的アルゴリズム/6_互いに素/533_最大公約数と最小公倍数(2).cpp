#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
  if (y == 0) return x;
  else return gcd(y, x % y);
}

vector<ll> divisors(ll n) {
  vector<ll> res;
  for (ll i = 1; i * i <= n; ++i) {
    if (n % i != 0) continue;
    res.push_back(i);
    if (n / i != i) res.push_back(n / i);
  }
  sort(res.begin(), res.end());
  return res;
}

int main() {
	ll G, M;
	cin >> G >> M;
	if (M % G != 0) {
		cout << -1 << endl;
		return 0;
	}
	
	ll a = M / G;
	ll ans = 100100100100100;
	vector<ll> res = divisors(a);
	for (auto v : res) {
		if (gcd(v, a / v) != 1) continue;
		ans = min(ans, G * v + G * a / v);
	}
	cout << ans << endl;
}