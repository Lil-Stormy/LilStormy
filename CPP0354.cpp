#include <bits/stdc++.h>


using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		int dem = 0;
		
		char temp = 'a';
		for (int i=0; i<s.length(); i++) {
			if (s[i] != temp) {
				if (dem>0) cout << dem ;
				temp = s[i];
				cout << temp;
				dem = 1;
			}
			else {
				dem++;
			}
		}
		cout << dem << endl;
		

	}
	return 0;
}

