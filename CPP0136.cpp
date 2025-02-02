#include <bits/stdc++.h>
#include <vector>
#define ll long long

using namespace std;

const int MAX = 1000009;
bool sang[MAX];
vector<ll> bp;

int main() {
	// chay sang:
	fill(sang, sang+MAX, true);
	sang[0] = false;
	sang[1] = false;
	for (ll i=2; i <MAX; i++) {
		if (sang[i] == true) {
			bp.push_back(i*i);
			for(ll j=i+i; j< MAX; j+=i) {
				sang[j] = false;
			}
		}
	}
	
	
	
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		ll len = bp.size();
		ll ans =0;
		for (ll i=0; i< len ; i++) {
			if (n>= bp[i]) {
				ans +=1;
			}
			if (n < bp[i]) {
				break;
			}
		}
		
		cout << ans << endl;



	}
	return 0;
}

