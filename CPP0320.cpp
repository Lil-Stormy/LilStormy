#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dd[10];
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		fill(dd, dd+10, 0);
		string s;
		cin >> s ;
		int len = s.length();
		if (s[0] == '0') {
			cout << "INVALID" << endl;
			continue;
		}
		
		bool invalid = false;
		for (int i=0; i<len; i++) {
			if (s[i] < '0' || s[i] > '9') {
				cout << "INVALID" << endl;
				invalid = true;
				break;
			}
			
			else {
				int temp = s[i] - '0';
				dd[temp] ++;
			}
		}
		
		if (!invalid) {
			bool isPrint = false;
			for (int i=0; i< 10; i++) {
				if (dd[i] == 0) {
					cout << "NO" << endl;
					isPrint = true;
					break;
				}
			}
			if (!isPrint) cout << "YES" << endl;
		}



	}
	return 0;
}

