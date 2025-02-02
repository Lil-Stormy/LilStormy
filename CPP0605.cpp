#include <bits/stdc++.h>
#define ll long long int
using namespace std;


class PhanSo {
	private:
		ll tu, mau;
	public:
		PhanSo(ll t=1, ll m=1 ) {
			tu = t;
			mau =m;
		}
		
		PhanSo(const PhanSo& p) {
			tu = p.tu;
			mau = p.mau;
		}
		
		void rutgon() {
			ll k = __gcd(tu,mau);
			tu /= k;
			mau /=k;
		}
		
		friend void operator>> (istream& in, PhanSo& p) {
			in >> p.tu >> p.mau;
		}	
		
		friend void operator<< (ostream& out, const PhanSo& p) {
			out << p.tu << "/" << p.mau;
		}
		
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
