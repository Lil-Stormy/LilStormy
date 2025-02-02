#include <bits/stdc++.h>


using namespace std;

void tong(string a, string b) {  // len a > len b
	int l_a = a.length();
	int l_b = b.length();
	int i = l_a -1;
	int j = l_b -1;
	
	int ans[l_a] = {0};
	int nho = 0;
	while (i>=0 && j>=0) {
		int temp = (int)(a[i] + b[j] - '0' - '0' + nho);
		nho = temp/10;
		temp%=10;
		ans[i] = temp;
		i--, j--;
	}
	
	while (i>=0) {
		int temp = (int)(a[i] + nho - '0');
		nho = temp/10;
		temp%=10;
		ans[i] = temp;
		i--;
	}
	if (nho==1) cout << 1;
	for (int i=0; i<l_a; i++) {
		cout << ans[i];
	}
	cout << endl;
}
int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		string a, b;
		cin >> a >> b;
		if (a.length() < b.length()) 
			a.swap(b);
		tong(a, b);
	}
	return 0;
}

