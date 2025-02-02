#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
// tao 1 ma tran 2 hang, chua cac tong cua ma tran 2d theo hang, cot
//{ 1a, 2a, 3a..
//  1b, 2b, 3b.. }
// thay doi 1 o -> thay doi 1 gtri hang tren + 1 gtri hang duoi
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int sum[2][n];
		int a[n][n] ;
		int max = -1;
		bool hang1;
		for (int i=0; i<n; i++) {
			int temp = 0;
			for (int j=0; j<n; j++) {
				cin >> a[i][j];
				temp += a[i][j];
			}
			sum[0][i] = temp;
			if (temp > max) {
				max = temp;
				hang1 = true;
			}
		}
		
		// cong theo cot
		for (int j=0; j<n; j++) {
			int temp = 0;
			for (int i=0; i< n; i++) {
				temp += a[i][j];
			}
			sum[1][j] = temp;
			if (temp > max) {
				max = temp;
				hang1 = false;
			}
		}
		
//		for (int i=0; i<2; i++) {
//			for (int j=0; j<n; j++) {
//				cout << sum[i][j] << endl;
//			}
//		}
		int ans = 0;
		if (hang1) {
			for (int i=0; i<n; i++) {
				ans += (max - sum[0][i]);
			}
		}
		
		else {
			for (int i=0; i<n; i++) {
				ans += (max - sum[1][i]);
			}
		}
		
		cout << ans << endl;





	}
	return 0;
}

