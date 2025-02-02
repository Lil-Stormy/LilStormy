#include <bits/stdc++.h>
#include <vector>

using namespace std;
bool sang[10009];
int main() {
	fill(sang, sang+10009, true);
	sang[0] = false;
	sang[1] = false;
	for (int i=2; i*i<=10009; i++) {
		if (sang[i]) {
			for(int j=i+i; j< 10009; j+=i) {
				sang[j] = false;
			}
		}
	}
	
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int i=2; i<=n; i++) {
			if (sang[i]) {
				cout << i << " ";
			}
		}
		cout << endl;



	}
	return 0;
}

