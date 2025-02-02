#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	//createsang();
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int dem =0;
	int a[3];
	for (int i=0; i< n; i++) {
		int dem0 = 0;
		int dem1=  0;
		for (int j=0; j< 3; j++) {
			cin >> a[j] ;
			if (a[j] ==0) dem0++;
			else dem1++;
			
		}
		if (dem1 > dem0) dem++;
	}
	
	cout << dem << endl;
	return 0;
}

