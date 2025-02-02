#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s; 
		int len = s.length();
		int i=0;
		int temp = 0;
		int ans = 0;
		while (i < len) {
			// ktra chu so hay ko
			// neu YES, ktra temp co chu so chua? Co thi *10 r +
			// neu NO, ans += temp, temp=0
			if (s[i] >= '0' && s[i] <= '9' ) {
				if (temp>0) {
					temp = temp*10 + (s[i] - '0');
				}
				else temp = (s[i] - '0');	
			}
			else {
				ans += temp;
				temp = 0;
			}
			i++;
		}
		if (temp>0) ans += temp;
		
		cout << ans << endl;


	}
	return 0;
}

