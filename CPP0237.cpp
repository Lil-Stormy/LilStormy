#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <utility>
using namespace std;

char a[30][30];
int n, i, j;
int ans;

void mtvuong(int k) {
	if (i + k <n && j + k < n) {
		if (a[i+k][j] == 'X' && a[i][j+k] == 'X') {
			mtvuong(k+1);
			// ktra duoi
			for (int l=1; l<= k; l++) {
				if (a[i+k][j+l] == 'O' || a[i+l][j+k] == 'O') {
					return;
				}		
			}
			ans = max(ans, k+1); 
		}
	}
	
}
int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		ans = 0;
		cin >> n;
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				cin >> a[i][j];
			}
		}
		
		for ( i=0; i<n; i++) {
			for ( j=0; j<n; j++) {
				if (a[i][j] == 'X' && ans < min(n-i+1, n-j+1)) {
					mtvuong(0);
				}
			}
		}

		cout << ans << endl;


	}
	return 0;
}

