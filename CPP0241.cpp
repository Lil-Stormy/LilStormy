#include <bits/stdc++.h>


using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i< n; i++) {
			cin >> a[i];
		}
		int i=0, j=n-1;
		int x = a[i], y = a[j];
		bool isPair = false;
		int count =0;
		
		while (i<j) {
			if (x==y) {
//				cout << "Bang nhau roi " << endl;
//				cout << "i, j = " << i << j << endl;
				i+=1;
				j-=1;
				isPair = true;
				x = a[i], y = a[j];
				// x, y nhan gtri tiep theo
				continue;
			}
			if (x<y) {
//				cout << "y To qua!" << endl;
//				cout << "i, j = " << i << j << endl;
				i+=1;
				x += a[i];
				count++;
				isPair = false;
				continue;
			}
			
			if (x>y) {
//				cout << "y Nho qua!" << endl;
//				cout << "i, j = " << i << j << endl;
				j-=1;
				y += a[j];
				count++;
				isPair = false;
				continue;
			}
			
		}
		
//		if (isPair==false) {
//			cout << "Not pair " << endl;
//			int rest  =j-i;
//			count+=rest;
//		}
		 	
		
		cout << count << endl;
		



	}
	return 0;
}

