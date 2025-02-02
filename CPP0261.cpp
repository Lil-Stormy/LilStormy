#include <bits/stdc++.h>

using namespace std;

//void showarr(int n, int arr[]) {
//	for (int i=0; i< n; i++) {
//		for (int j=0; j< n; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//}



int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int arr[n][n];
	for (int i=0; i< n; i++) {
		for (int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
	
	int m;
	cin >> m;
	int cs[m][m];
	for (int i=0; i< m; i++) {
		for (int j=0; j< m; j++) {
			cin >> cs[i][j];
		}
	}
	
	// bien ma tran mxm thanh nxn
	
	for (int i=0; i< n; i++) {
		for (int j=0; j< n; j++) {
			arr[i][j] *= cs[i%m][j%m];
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}

