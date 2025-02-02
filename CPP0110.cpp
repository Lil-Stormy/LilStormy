#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string a;
		cin >> a;
		int len = a.length();
		
		int i=0;
		while (i+2 < len) {
			if (a.substr(i,3) == "084") {
				a[i] = 'x';
				a[i+1] = 'x';
				a[i+2] = 'x';
				break;
			}
			i++;
		}
		
		for (int i=0; i< len; i++) {
			if ( a[i] != 'x') cout << a[i];
		}
		cout << "\n";
	}
}
