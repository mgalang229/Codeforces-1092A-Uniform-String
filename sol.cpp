#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		int cnt = 0, tmp = 97;
		for (int i = 0; i < n; i++) {
			if (cnt >= k) {
				tmp = 97;
				cnt = 0;
			}
			cout << (char) tmp;
			tmp++;
			cnt++;
		}
		cout << '\n';
	}
	return 0;
}
