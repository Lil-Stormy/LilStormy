#include <bits/stdc++.h>
#include <set>

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
		
		set<int> trung;
		int count = 0;
		
		for (int i=0; i< n; i++) {
			for (int j=0; j< n; j++) {
				cin >> arr[i][j];
				if (i==0) {
					trung.insert(arr[i][j]);
				}
			}
		}
		
		for (int i=1; i< n; i++) {
			set<int> temp;
			for (int a:trung) {
				for (int j=0; j< n; j++) {
					if (a== arr[i][j]) {
						temp.insert(a);
						break;
					}
				}
			}
			trung = temp;
		}
		
		cout << trung.size() << endl;
		
		
		


	}
	return 0;
}

