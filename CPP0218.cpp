#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int* a = new int[n];
		int m = -999;
		int temp;
		bool isDif = false;
		
		for (int i=0; i<n; i++) {
			cin >> a[i];
			if (a[i] > m) m = a[i];
			if (i>0 && a[i] != a[i-1]) isDif = true;
		}
		
		int cnt = 0;
		for (int i=1; i<=m; i++) {
			bool isDongdu = true;
			int d = m%i;
			for (int j=0; j< n; j++) {
				if (a[j] % i != d) {
					isDongdu = false;
					break;
				}
			}
			if (isDongdu) cnt ++;
		}
		
		
		
		if (!isDif) cout << 0 << endl; 
		else cout << cnt << endl;
		delete [] a;
	}
}
