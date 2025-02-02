#include <iostream>

using namespace std;

long long ucln(long long a, long long b) {
	while (a!=b) {
		if (a>b) a=a-b;
		else b=b-a;
	}
	return a;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		long long a, b;
		cin >> a >> b;
		long long gcd = ucln(a, b);
		long long mul = a*b;
		long long lcm = mul/gcd;
		
		cout << lcm << " " << gcd << endl;
	}
}
