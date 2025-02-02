#include <bits/stdc++.h>


using namespace std;

bool thuannghich( string s, int n) {
	int l=0;
	int r = n-1;
	bool isTN = true;
	while (r>l) {
		if ( s[l] != s[r] ) {
			isTN = false;
			break;
		}
		l++;
		r--;
	}
	return isTN;
}

bool chan(char a) {
	int so = a - '0';
	if (so%2==0) return true;
	else return false;
}

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		int n = s.length();
		if (!thuannghich(s, n) ) {
			cout << "NO" << endl;
			continue;
		}
		
		bool isChan = true;
		for (int i=0; i<n; i++) {
			if (!chan(s[i]) ) {
				isChan =  false;
				break;
			}
		}
		
		if (isChan) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}
	return 0;
}

