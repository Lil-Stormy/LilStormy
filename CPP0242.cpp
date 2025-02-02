#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		for (int i=0; i<n; i++) {
			cin >> b[i];
		}
		int x = 0;
		int y=0;
		int ans = 0;
		
		for (int i=0; i< n; i++) {
			x=0; 
			y=0;
			for (int j=i; j<n; j++) {
				x += a[j];
				y += b[j];
				if (x==y) {
					if (ans < j-i+1) ans = j-i+1;
					// j-i+1 : Do dai
				}				
			} 
		}
		cout << ans << endl;
	}
}
