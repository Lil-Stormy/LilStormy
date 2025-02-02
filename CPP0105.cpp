#include <iostream>

using namespace std;

bool checklp(int n) {
	while (n>0) {
		int num = n%10;
		n/=10;
		if (num != 8 && num !=6 && num!=0) {
			return false;
		}
		
	}
	return true;
}
int main() {
	int tc;
	cin >> tc;
	while (tc -- ) {
		int n;
		cin >> n;
		if (checklp(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
