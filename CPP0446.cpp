#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <set>
#include <vector>
#include <utility>
 
using namespace std;

int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i] ;
		}
		
		int ans = INTTO;
		int temp = INTTO;
		for (int i=0; i< n; i++) {
			for (int j=0; j< n; j++) {
				if (i!=j) {
					if (abs(a[i] + a[j]) < temp) {
						temp = abs(a[i] + a[j]);
						ans = a[i] + a[j];
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

