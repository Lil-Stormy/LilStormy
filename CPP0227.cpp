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
		int arr[n][n];
		for (int i=0; i< n; i++) {
			for (int j=0; j<n; j++) {
				cin >> arr[i][j];
			}
		}
		

		int j=0;
		int i=0;
		while (i< n) {
			if (j==0) {
				while (j<n) {
					cout << arr[i][j] << ' ';
					j++;
				}
				j-=1;
				//cout << "Loop 1 end" << endl;
			}
			
			else if (j==n-1) {
				while (j>=0) {
					cout << arr[i][j] << ' ';
					j--;
				}
				j+=1;
			}
			
			//cout << "loop end" << endl;
			i++;
			continue;
			
			
		}
		cout << endl;


	}
	return 0;
}

