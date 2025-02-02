#include <bits/stdc++.h>
#define ll long long
using namespace std;
// quy hoach dong

ll tich[1000] = {0};

ll bcnn ( ll a, ll b) {
	ll ans = (a*b) / (ll)__gcd(a, b);
	return ans;
}

ll cal(ll a) {
	if (tich[a] != 0) {
		return tich[a];
	}
	else {
		if (tich[a-1] == 0) cal(a-1);
		ll ans = bcnn ( tich[a-1], a);
		tich[a] = ans;
		return ans;
	}
}

int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	tich[1] = 1;
	tich[2] = 2;
	//cout << "Tich 3: " << tich[3] << endl;
	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		cout << cal(n) << endl;
	}
	return 0;
}

