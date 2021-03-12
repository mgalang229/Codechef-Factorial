#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int zeroes = 0;
		int c = 5;
		while ((n / c) > 0) {
			zeroes = zeroes + (n / c);
			c = c * 5;
		}
		cout << zeroes << '\n';
	}
	return 0;
}
