#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b;
	cin >> n;
	map<int, int> m;
	m[1] = 0;
	for (int i = 2; i <= n; ++i) {
		cin >> m[i];
	}
	cin >> a >> b;
	int sum = 0;
	for (int i = a + 1; i <= b; ++i)
		sum += m[i];
	cout << sum << endl;
	return 0;
}