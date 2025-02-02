#include <iostream>
#include <cmath>

using namespace std;

void check(int a, int b) {
	for (int i=a+1; i< b; i++) {
		if (i== 2 || i==3) {
			cout << i << ' ' ;
		}
		else if (i%2==0) continue;
		else {
			bool snt  = true;
			for (int j=3; j<=sqrt(i); j+=2) {
				if (i%j==0) {
					snt= false;
					break;
				}
			}
			if (snt) cout << i << ' ' ;
			
		}
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	check(a, b);
}
