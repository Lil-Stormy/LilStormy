#include <bits/stdc++.h>
#include <fstream>
#define ll long long

using namespace std;


int main() {
	ifstream inp;
	inp.open("DATA.in");
	int n, m;
	inp >> n >> m;
	int a[n], b[m];
	int res[100], cnt = 0;
	
	for (int i=0; i< n; i++) {
		inp >> a[i];
	}
	for (int i=0; i< m; i++) {
		inp >> b[i];
	}
	
	sort(a, a+n);
	int temp = -1;
	for (int i=0; i< n; i++) {
		bool isDup = false;
		for (int j=0; j<m; j++) {
			if (a[i] == b[j] && a[i] != temp) {
				isDup = true;
				temp = a[i];
				res[cnt] = a[i];
				cnt++;
				break;
			}
		}
	}
	sort(res, res+cnt);
	for (int i=0; i< cnt; i++) {
		cout << res[i] << ' ';
	}
}


