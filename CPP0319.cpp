#include <bits/stdc++.h>

using namespace std;

void generate_max(int n, int s) {
	if (s> 9*n || s==0) cout << -1;
	else {
		while (n--) {
			if (s>=9) {
				s-=9;
				cout << 9;
			}
			else {
				cout << s;
				s-=s;
			}
		}
	}

}

void generate_min(int n, int s) {
	if (s> 9*n || s==0) cout << -1 << " ";
	else {
		int arr[n];
		fill (arr, arr+n, 0);
		for (int i=n-1; i>=0; i--) {
			if (s>9) {
				arr[i] = 9;
				s-=9;
			}
			else if (s<=9 && s>1 ) { // 1< s <=9 
				if (i>0) { // chua phai gia tri cuoi cung
					arr[i] = s-1;
					s=1;
				}
				else {
					arr[i] = s;
				}
			}
			else if (s==1) {
				if (i==0) arr[i] = 1;
				else arr[i] = 0;
			}
		}
		for (int i=0; i<n; i++) {
			cout << arr[i];
		}
		cout << " ";
	}
}

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, s;
	cin >> n >> s;
	generate_min(n,s);
	generate_max(n,s);
	



	
	return 0;
}

