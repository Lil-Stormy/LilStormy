#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//make array
	int sntArr[10000];
	sntArr[0] = 2;
	sntArr[1] = 3;
	int n = 2;
	for (int i=5; i< 10000 ; i+=2) {
		bool snt=  true;
		for (int j=3; j<=sqrt(i); j+=2) {
			if (i%j==0) {
				snt = false;
				break;
			}
		}
		if (snt) {
			sntArr[n] = i;
			n++;
		}
	}
	
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		for (int i=0; i< n; i++) {
			if (sntArr[i] >=a && sntArr[i] <=b) {
					cout << sntArr[i] << ' ' ;
			}
			if (sntArr[i] > b ) break;
		}
		cout << '\n';
	}
}
