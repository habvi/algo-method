#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> A(n + 1);
	A[0] = 1;
	for (int i = 0; i < n; ++i){
		if (i + 1 <= n) A[i + 1] += A[i];
		if (i + 2 <= n) A[i + 2] += A[i];
	}
	cout << A[n] << endl;
}