#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[1000001], b[1000001];
int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;
		ll max_a = -999999999;
		for (int i=0; i<n; i++) {
			cin >> a[i] ;
			if (a[i] > max_a) max_a = a[i];
		}
		
		ll min_b = 999999999;
		for (int i=0; i< m; i++) {
			cin >> b[i] ;
			if (b[i] < min_b) min_b= b[i];
		}
		
		cout << max_a * min_b << endl;
	}
	return 0;
}

