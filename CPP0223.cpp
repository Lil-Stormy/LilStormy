#include <bits/stdc++.h>


using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;
		int arr[n][m];
		for (int i=0; i< n; i++) {
			for (int j=0; j< m; j++) {
				cin >> arr[i][j];
			}
		}
		
		int tren = 0;
		int phai = m-1;
		int duoi = n-1;
		int trai = 0;
		
		//tren -  phai - duoi - trai
		// 1        2     3       4
		int judge = 1; 
		
		while (duoi>=tren && phai>=trai) {
			if (judge==1) {
				//tren
				for (int i=trai; i<=phai; i++) {
					cout << arr[tren][i] << ' ';
				}
				tren++;
				judge = 2;
				continue;
			}
			
			if (judge ==2) {
				//phai
				for (int i=tren; i<= duoi; i++) {
					cout << arr[i][phai] << ' ';
				}
				phai--;
				judge=3;
				continue;
			}
			
			if (judge==3) {
				//duoi
				for (int i=phai; i>=trai; i--) {
					cout << arr[duoi][i] << ' ';
				} 
				duoi--;
				judge=4;
				continue;
			}
			
			if (judge==4) {
				// trai
				for (int i=duoi; i>=tren; i--) {
					cout << arr[i][trai] << ' ' ;
				}
				trai++;
				judge=1;
				continue;
			}
			
		}
		cout << endl;
		
	



	}
	return 0;
}

