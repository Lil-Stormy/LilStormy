#include <iostream>

using namespace std;

int rutGon(int n) {
	int ans=0;
	while (n>0) {
		ans += n%10;
		n/=10;
	}
	return ans;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		if (n<10) cout << n << endl;
		else {
			while (n>=10) {
				int a= rutGon(n);
				n=a;
			}
			cout << n << endl;
		}
		
	}
	
}
