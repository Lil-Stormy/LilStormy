#include <bits/stdc++.h>
#define ll long long
using namespace std;

// he dem 1 2 3 ...
ll tong[100009] = {0};

int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n; 
		ll a[n+1];
		ll temp = 0;
		for (int i=1; i<=n; i++) {
			cin >> a[i];
			temp += a[i];
			tong[i] = temp;
		}
		
//		for (int i=1; i<= n; i++) {
//			cout << tong[i] << " ";
//		}
//		cout << endl;
		
		
		int ct = 2;
		bool isPrint = false;
		while (ct < n) {
			ll trai = tong[ct-1];
			ll phai = tong[n] - tong[ct];
			if (trai ==  phai) {
				isPrint = true;
				cout << ct << endl;
			}
			ct++;
		}
		if (isPrint == false) cout << -1 << endl;


	}
	return 0;
}

