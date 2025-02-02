#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <set>
#include <utility>
#include <climits>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans[n][n], a[n*n];
	
	for (int i=0; i< n*n; i++) {
		cin >> a[i];
	}
	
	sort(a, a+(n*n));

	
	int tren = 0;
	int duoi = n-1;
	int trai = 0;
	int phai = n-1;
	
	int cnt = 0;
	while (tren <= duoi && trai <= phai) {
		if (trai <= phai && tren <= duoi) {
			for (int i= trai; i<= phai; i++) {
				ans[tren][i] = a[cnt];
				cnt++; 
			}
			tren +=1;
		}
		
		if (trai <= phai && tren <= duoi) {
			for (int i= tren; i<= duoi; i++) {
				ans[i][phai] = a[cnt];
				cnt++; 
			}
			phai -=1;
		}
		
		if (trai <= phai && tren <= duoi) {
			for (int i= phai; i>= trai; i--) {
				ans[duoi][i] = a[cnt];
				cnt++; 
			}
			duoi -=1;
		}
		
		if (trai <= phai && tren <= duoi) {
			for (int i= duoi; i>= tren; i--) {
				ans[i][trai] = a[cnt];
				cnt++; 
			}
			trai +=1;
		}
//		cout << "Trai, phai tren duoi:" << endl;
//		cout << trai << phai << tren << duoi << endl;
	}
	
//	if (n%2!=0) {
//		int mid = n/2;
//		ans[mid][mid] = a[n*n-1];
//	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j< n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
}
