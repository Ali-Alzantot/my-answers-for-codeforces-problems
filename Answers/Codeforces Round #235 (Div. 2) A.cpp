#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	int array[n];
	for (int i = 0; i < n; ++i)
		cin >> array[i];
	vector<int> v(array, array + n);
	int num = 0;
	int sum = accumulate(v.begin(), v.end(), 0);
	if (sum > 0) {
		while (sum > 0) {
			sum -= x;
			num++;
		}
	} else if (sum < 0) {
		while (sum < 0) {
			sum += x;
			num++;
		}
	}
	cout << num << endl;
	return 0;
}