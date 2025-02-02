#include <bits/stdc++.h>
#define ll long long
using namespace std;
// sort + tong chu so
int dd[26] = {0};
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		fill (dd, dd+26, 0);
		string s;
		cin >> s;
		int len = s.length();
		int sum = 0;
		
		for (int i=0; i< len; i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				sum += (s[i] - '0');
			}
			else {
				int temp = s[i] - 'A';
				dd[temp] ++;
			}
		}
		
		for (int i=0; i< 26; i++) {
			int k = dd[i];
			for (int j=0; j<k; j++) {
				char a = 'A' + i;
				cout << a;
			}
		}
		cout << sum << endl;

	}
	return 0;
}

