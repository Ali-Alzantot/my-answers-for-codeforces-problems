#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int num = n * n;
	for (int i = 1; i <= num / 2; i += n / 2) {
		for (int j = 0; j < n / 2; ++j) {
			if (j == n / 2 - 1)
				cout << i + j << " " << num + 1 - (i + j);
			else
				cout << i + j << " " << num + 1 - (i + j) << " ";
		}
		cout << endl;
	}
	return 0;
}