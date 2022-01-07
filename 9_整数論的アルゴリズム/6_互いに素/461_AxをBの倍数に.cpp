// AとBのgcdをGとすると A = GA', B = GB' でありA'とB'は互いに素
// GA'xがGB'の倍数である = A'xがB'の倍数である
// A'とB'が互いに素であるから "xがB'の倍数である" ことと同じ

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
  if (y == 0) return x;
  else return gcd(y, x % y);
}

int main() {
	ll a, b, n;
	cin >> a >> b >> n;
    ll g = gcd(a, b);
    cout << n / (b / g) << endl;
}