#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		char c;
		cin >> c;
		if (c >= 'A' && c <= 'Z') {
			c+=32;
		}
		else if (c >='a' && c <= 'z') {
			c-=32;
		}
		cout << c << endl;
	}
}
