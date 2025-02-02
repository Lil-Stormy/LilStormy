#include <bits/stdc++.h>
#define ll long long
using namespace std;

int user[100001] = {0}; // record tat ca ng dung
//int lb[100002] = {0}; // kha nang login cua ng dung, n-1 la sum

int login(string a, string b) { //  a -> b
	int lena = a.length();
	int lenb = b.length();
	if (lena < lenb) return 0;
	for (int i = 0; i<= lena - lenb; i++) { // i -> a
		int isSame = 1;
		for (int j=0; j< lenb; j++) { //  j -> b
			if (a[i+j] != b[j]) {
				isSame = 0;
				break;
			}
		}
		if (isSame) return 1;
	}
	return 0;
}
int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	string a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll sum = 0;
	
	user[0] = 0;
	for (int i=1; i< n; i++) { //  hang ngoai cung la sum
		for (int j=0; j<i; j++) {
			int temp = login(a[i], a[j]);
			//cout << "i, j = " << i << j << ", temp = " << temp << endl;
			if (temp==1) {
				user[i] ++;
				sum++;
				if (a[i] == a[j]) sum++;
			}
		}
		
	}
	
	cout << sum << endl;
	
	return 0;
}

