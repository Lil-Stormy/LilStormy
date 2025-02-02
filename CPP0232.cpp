#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int m,n;
		cin >> n >> m;
		int arr[n][m];
		for (int i=0; i< n; i++) {
			for (int j=0; j< m; j++) {
				cin >> arr[i][j];
			}
		}
		int arr2[n][m] = {0};
		// Tinh chieu cao cot so "1" o cac cot:
		for (int j=0; j< m; j++) {
			arr2[0][j] = arr[0][j];
			for (int i=1; i< n; i++) {
				if (arr[i][j]>0) {
					arr2[i][j] = arr2[i-1][j] +1;
				}
				else arr2[i][j] =0;
			}
		}
		
		//sap xep theo hang <=> doi cho cac cot 
		for (int i=0; i< n; i++) {
			sort(arr2[i], arr2[i]+m);
		}
		int res = 0;
		// tim dien tich hcn lon nhat
		// dien tich = (chieu cao cot so 1) x (do dai day)
		for (int i=0; i< n; i++) {
			for (int j=0; j< m; j++) {
				res = max(res, arr2[i][j] * (m-j));
				//              chieu cao    day
			}
		}
		
		cout << res << endl;
	}
}
