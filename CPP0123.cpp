#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n==0 || n==1) {
		cout << "NO" << endl;
	}
	else if (n==2 || n==3) {
		cout << "YES" << endl;
	}
	
	else {
		bool isSnt = true;
		for (int i=2; i<= sqrt(n); i++) {
			if (n%i==0) {
				isSnt = false;
				break;
			}
		}
		if (isSnt) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
