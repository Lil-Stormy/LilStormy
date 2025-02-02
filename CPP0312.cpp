#include <bits/stdc++.h>

/* pangram:
- n: so ki tu con thieu
- n<=k : OK
*/

using namespace std;

int danhDau[26];
int main() {
//	ios_base :: sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	getchar();
	while (tc--) {
		string s;
		int k;
		getline(cin, s);
		cin >> k;
		getchar();
		fill (danhDau, danhDau+26, 0);
		int len = s.length();
		//cout << "Len: " << len << endl;
		
		for (int i=0; i< len; i++) {
			int temp =  (s[i] - 'a');
			//cout << "temp = "<< temp << endl;
			if (0<=temp && temp<=25) {
				danhDau[temp] ++;
			}
		}
		
		int n=0; // missing letter
		for (int i=0; i<26; i++) {
			if ( danhDau[i] == 0) n++;
		}
		//cout << "n= " << n << endl;
		
		if (n<=k && len>=26) cout << 1 << endl;
		else cout << 0 << endl;
			
	}
	return 0;
}

