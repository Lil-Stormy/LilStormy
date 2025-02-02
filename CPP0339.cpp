#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll Ckn(int n, int k) { // k==2, n>=2
	ll ans = 1;
	int temp = n-k;
	if (temp==0) return 1;
	ll i=1;
	for (ll j= k+1; j<= n; j++) {
		//cout << i << " " << j << endl;
		ans = ans*j/i;
		i++;
		//cout << ans << endl;
	}
	return ans;
}
int dd[27];
int main() {
	//createsang();
	//cout << Ckn(20,2) << endl;
	int tc;
	cin >> tc;
	while (tc--) {
		fill(dd, dd+27, 0);
		string s;
		cin >> s;
		int len = s.length();
		for (int i=0; i< len; i++) {
			int temp = s[i] - 'a';
			dd[temp] ++;
		}
		ll ans = len;
		
		for (int i=0; i< 26; i++) {
			if (dd[i] <=1) continue;
			else {
				ll temp = Ckn( dd[i] , 2);
				ans += temp;
			}
		}
		
		cout << ans << endl;

// cccccccccccccccccccc

	}
	return 0;
}

