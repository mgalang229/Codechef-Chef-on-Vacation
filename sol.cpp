#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, z;
		cin >> x >> y >> z;
		// check if both trips can be joined
		cout << (x + y <= z ? "YES" : "NO") << '\n';
	}
	return 0;
}
