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
		int trailing_zeroes = 0;
		// run a while-loop until 'n' is greater than 0
		while (n > 0) {
			// get the total sum of the quotient of 'n' divided 5
			trailing_zeroes += (n / 5);
			n /= 5;
		}
		cout << trailing_zeroes << '\n';
	}
	return 0;
}
