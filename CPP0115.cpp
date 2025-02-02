#include <iostream>
#include <cmath>

using namespace std;

void factorize(int n) {
	if (n==1) cout << 1 << endl;
	else {
		for (int i=2; i<= sqrt(n) ; i++) {
			int mu = 0;
			while(n%i==0) {
				mu++;
				n/=i;
			}
			
			if (mu>0) cout << i << ' ' << mu << ' ' ;
		}
		if (n>1) cout << n << ' ' << 1 << endl;
		else cout << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		factorize(n);
	}
}
