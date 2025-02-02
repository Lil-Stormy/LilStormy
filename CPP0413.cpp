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
		cin >> n;
		int arr[n];
		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int l = 0;
		int r = n-1;
		while (1){
			if (l<=r) {
				cout << arr[r] << " ";
				r--;
			}
			if (l<=r) {
				cout << arr[l] << " ";
				l++;
			}
			else break;
		}
		cout << endl;
	}
	return 0;
}

