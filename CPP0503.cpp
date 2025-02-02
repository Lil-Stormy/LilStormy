#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
	if (a == 0 || b==0) return (max(a, b));
	else {
		if (a>b) {
			a = a%b;
			return gcd(a, b);
		}
		else {
			b = b%a;
			return gcd(a,b);
		}
	}
}
struct PhanSo {
	ll a, b;
};

void nhap(PhanSo &p) {
	cin >> p.a >> p.b ;
}

void rutgon(PhanSo &p) {
	ll x = gcd(p.a , p.b);
	p.a /= x;
	p.b /=x;
}

void in(PhanSo p) {
	cout << p.a << "/" << p.b ;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

