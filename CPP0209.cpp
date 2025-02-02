#include <bits/stdc++.h>


using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, q;
		cin >> n >> q;
		//cout << n << q;
		int arr[n] = {0};
		int arrTong[n] = {0};
		for (int i=0; i< n; i++) {
			cin >> arr[i];
//			cout << "Da nhan" << endl;
//			cout << arr[i] << endl;
		}
		int temp = 0;
		for (int i=0; i< n; i++) {
			temp += arr[i];
			arrTong[i] = temp;
		}
		
		while (q--) {
			int l, r;
			cin >> l >> r;
			if (l==1) cout << arrTong[r-1] << endl;
			else {
				cout << arrTong[r-1] - arrTong[l-2] << endl;
			}
		}
	}
	// 1 2 3  4  1  2  3  4
	// 1 3 6 10 11 13 16 20
	return 0;
}

