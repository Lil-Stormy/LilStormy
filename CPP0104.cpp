#include <iostream>

using namespace std;

long long fact(int n) {
	long long ans =1;
	for (int i=2; i<= n; i++) {
		ans*=i;
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	long long ans=0;2
	for (int i=1; i<=n; i++) {
		ans += fact(i);
	}
	cout << ans;
}
