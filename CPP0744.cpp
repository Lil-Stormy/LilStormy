#include <bits/stdc++.h>
#include <vector>
#define ll long long

using namespace std;

ll tong = 999;   //fix
ll n;

ll gt(ll a) {
	if (a==0) return 0;
	ll ans=1;
	for (ll i=1; i<=a; i++) {
		ans*= i;
	}
	return ans;
}
ll ce (ll a, ll b) { //  aCb
	if (b==0 || a==0 || a==b) return 1;
	return ( gt(a) / ( gt(b) * gt(a-b) ) );
}

void dem(vector<ll> gene, ll r, ll b, ll g) {
//	for (ll i: gene) {
//		cout << i << " ";
//	}
//	cout << endl;
	r += gene[0];
//	cout << "R= " << r << endl;
	b += gene[1] ;
	g += gene[2];
	ll ans = ce(n, r) * ce(n-r, b) ;
//	cout << ce(4,3)  << endl;
//	cout << ans  << endl;
	tong += ans;
	
}

void generate (int k, vector<ll> gene, ll x, ll r, ll b, ll g) {
	if (k>=3) {
		gene[k-1] = x;
		dem(gene, r, b, g);
		return;
	}
	for (ll i=0; i<=x; i++) {
		gene[k-1] = i;
		generate(k+1, gene, x-i, r,  b, g);
		continue;
	}	
}   

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		tong = 0;
		ll r, b, g;
		cin >> n >> r >>b >> g;
		ll x =n-(r+b+g);
		
		
		vector<ll> gene = {0,0,0};
		generate(1, gene, x, r, b, g);
		
		cout << tong << endl;
	}
	return 0;
}


