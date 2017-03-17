#include <iostream>
using namespace std;

int main() {
	int wakehour,wakemin,sleephour,sleepmin;
	char c;
	cin>>wakehour>>c>>wakemin;
	cin>>sleephour>>c>>sleepmin;
	int diff=(wakehour*60+wakemin)-(sleephour*60+sleepmin);
	if(diff<0)
		diff+=24*60;
	printf("%02d:%02d",diff/60,diff%60);


	return 0;
}