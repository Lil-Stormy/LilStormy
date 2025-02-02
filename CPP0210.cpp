#include <bits/stdc++.h>
using namespace std;

void solve(int* a, int n) {
	int ans = 0;
	bool decre = true;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if ( a[i] < a[j] ) {
				decre = false;
				ans = max(ans, a[j] - a[i] );
			}
		}
	}
	if (decre) cout << -1 << endl;
	else cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int [n];
		for (int i=0; i<n; i++) {
			cin >> *(a+i);
		}
		
		solve(a,n);	
		delete[] a;
	}
}
