#include <bits/stdc++.h>


using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	int snt[10000];
	snt[0] = 2;
	snt[1] = 3;
	int len = 2;
	for (int i=5; i< 10000; i+=2) {
		bool isSnt = true;
		for (int j=0; j< len; j++) {
			if (i%snt[j] == 0) {
				isSnt = false;
				break;
			}
		}
		if (isSnt) {
			snt[len] = i;
			len++;
		}
	}
	
	while (tc--) {
		int n;
		int limit = n/2;
		
		cin >> n;
		if (n<30 ) {
			cout << 0 << endl;
			continue;
		}
		int divCount = 0;
		for (int i=0; i< len; i++) {
			if (n%snt[i] == 0) {
				divCount++;
				n/=snt[i];
			}
			if (divCount==3 || n==1) break;
			
		}
		
		//cout << divCount << endl;
		if (divCount==3 && n==1) cout<< 1<< endl;
		else cout << 0 << endl;		



	}
	return 0;
}

