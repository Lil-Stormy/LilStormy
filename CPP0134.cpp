#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool sang[10009];
vector<int> snt;

int main() {
	fill(sang, sang+10009, true);
	sang[0] = false;
	sang[1] = false;
	for (int i=2; i< 10009; i++) {
		if (sang[i]) {
			snt.push_back(i);
			for (int j=i+i; j< 10009; j+=i) {
				sang[j] = false;
			}
		}
	}	
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, k;
		cin >> n >> k;
		
		vector<int> ans;
		int i=0;
		int len = snt.size();
		
		while (i< len) {
			if (n%snt[i]==0) {
				ans.push_back(snt[i]);
				n/=snt[i];
				continue;
			}
			if (n==1) break;
			i++;
		}

		if (n>1) ans.push_back(n);
		
		if (k> ans.size() )  cout << -1 << endl;
		else cout << ans[k-1] << endl;

	}
	return 0;
}

