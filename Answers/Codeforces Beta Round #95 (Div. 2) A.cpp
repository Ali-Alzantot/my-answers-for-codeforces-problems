#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	string out ="";
	cin >> s;
	bool flag = true;
	for (int i = 1; i < s.length(); ++i) {
		if (islower(s[i])) {
			flag = false;
			break;
		}
	}
	if (flag) {
		for (int i = 0; i < s.length(); ++i) {
			if (islower(s[i])) {
				out += toupper(s[i]);
			} else {
				out += tolower(s[i]);
			}
		}
	} else {
		out = s;
	}
	cout << out << endl;
	return 0;
}