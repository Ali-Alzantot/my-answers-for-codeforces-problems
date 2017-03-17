#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int array[n][3];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < 3; ++j)
			cin >> array[i][j];
	int sum;
	for (int i = 0; i < 3; ++i) {
		sum = 0;
		for (int j = 0; j < n; ++j) {
			sum += array[j][i];
		}
		if (sum != 0)
			break;
	}
	if (sum == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}