#include <bits/stdc++.h>


using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n, l ,r;
		cin >> n;
		int arr[n];
		for (int i=0; i< n; i++) {
			cin >> arr[i];
		}
		cin >> l >> r;
		int tang = 0;
		int giam = 0;
		bool isTang = false;
		bool isNot = false;
		// =: break
		// >: tang, tang++
		// <: giam, giam++
		
		for (int i=l; i<r; i++) {
			if (arr[i] == arr[i+1]) {
				isNot = true;
				//cout << "isNot" << endl;
				break;
			}
			else if (arr[i] < arr[i+1] && isTang == false) {
				isTang = true;
				tang++;
			}
			else if (arr[i] > arr[i+1] && isTang ==  true) {
				isTang = false;
				giam++;
			}
		}
		if (isNot) cout << "No" << endl;
		else {
			if (tang==giam==1 && isTang ==  false) cout << "Yes" << endl; // dang giam
			else cout << "No" << endl;
				
			
		}



	}
	return 0;
}

