#include <bits/stdc++.h>
#define ll long long
   
using namespace std;
const ll MAX =100009;
bool sang[MAX];
vector<ll> arr;
int main() {
	// create sang:
	fill(sang, sang+MAX, true);
	sang[0] = false;
	sang[1] = false;
	for (ll i=2; i< MAX; i++) {
		if (sang[i]) {
			arr.push_back(i);
			for (ll j=i+i; j< MAX; j+=i) {
				sang[j] = false;
			}
		}
	}
	
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	ll len = arr.size();
	while (tc--) {
		ll n;
		cin >> n;
		ll i=0;
		vector<ll> ans ;
		while (i< len) {
			if (n%arr[i] == 0) {
				ans.push_back(arr[i]);
				//cout << arr[i] << endl;
				n/=arr[i];
				continue;
			}
			if (n==1) break;
			i++;
		}
		if (n>1) ans.push_back(n);
		ll x = ans[(ans.size() -1)];
		cout << x << endl;
	}
	
	
	return 0;
}


