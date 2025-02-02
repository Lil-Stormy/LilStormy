#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		ll arr[n];
		
		bool danhDau[10];
		fill(danhDau, danhDau+10, false);
		
		for (int i=0; i< n; i++) {
			cin >> arr[i];
			
			ll temp = arr[i];
			if (temp==0) danhDau[0] = true;
			else 
			{
			
				while (temp>0) {
					int num = temp%10;
					danhDau[num] = true;
					temp/=10;
				}
			}
			
		}
		
		for (int i=0; i< 10; i++) {
			if (danhDau[i]) cout << i << ' ' ;
		}
		cout << endl;
		
		
	}




	return 0;
}

