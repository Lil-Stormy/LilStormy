#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		int k;
		cin >> n >> k;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		int res = 0;
		for (int i=n-1; i>=0; i--) {
			if (a[i] <=k) {
				for (int j=0; j< i; j++) {
					if (a[j] + a[i] == k) {
						res++;
					}
					else if (a[j] + a[i] >k) break;
				}
			}
		}
		
		cout << res << endl;



	}
	return 0;
}

