#include <bits/stdc++.h>
#define ll long long

//186
using namespace std;

// ll gcd(ll a, ll b) {
// 	if (a==0 || b==0) return max(a, b);
// 	else {
// 		if (a>b) return ( gcd(a%b, b));
// 		else return ( gcd(b%a, a));
// 	}
// }




struct PhanSo {
	ll tu, mau;
};

void nhap(PhanSo &a) {
	cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo a, PhanSo b) {
	//tim mausochung msc
	ll mauchung = a.mau * b.mau;
	ll tongtu = a.tu * b.mau + a.mau * b.tu; 
	ll ucln = __gcd(mauchung, tongtu);
	
	PhanSo ans;
	ans.tu = tongtu / ucln;
	ans.mau = mauchung / ucln;
	return ans;
}

void in (PhanSo a) {
	//rut gon 
	int x = __gcd(a.tu, a.mau);
	a.tu /= x;
	a.mau /= x;
	cout << a.tu << '/' << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

