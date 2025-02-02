#include <bits/stdc++.h>


using namespace std;

int main() {
	
	bool sang[100001];
	fill(sang, sang+100001, true);
	sang[0] = false;
	sang[1] = false;
	for (int i=2; i< 100001; i++) {
		if (sang[i]) {
			for (int j=i+i; j< 100001; j+=i) {
				sang[j] = false;
			}
		}
	}
	
//	cout << sang[1] << endl;
//	cout << sang[7] << endl;
	
	int tc;
	cin >> tc;
	while (tc--) {
		int l, r;
		cin >> l >> r;
		int dem = 0;
		for (int i=l; i<=r; i++) {
			if (sang[i])  dem ++;
		}
		
		cout << dem << endl;


	}
	return 0;
}

