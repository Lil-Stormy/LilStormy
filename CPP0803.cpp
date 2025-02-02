#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> a;
vector<int> dd;

int main() {
	//createsang();
	ifstream inp;
	
	inp.open("DATA.in");
	int n;
	int cnt= 0;
	while (inp >> n) {
		bool isDup = false;
		int vt = 0;
		for (int i=0; i<cnt; i++) {
			if (n == a[i] ) {
				isDup = true;
				vt = i;
				break;
			}
		}
		if (!isDup) {
			a.push_back(n);
			dd.push_back(1);
			cnt++;
		}
		else dd[vt] ++;
	}
	
	for (int i=1; i< cnt-1; i++) {
		for (int j=0; j< cnt-i; j++) {
			if ( a[j] > a[j+1] ) {
				swap(a[j], a[j+1]);
				swap(dd[j], dd[j+1]);
			}
		}
	}
	for (int i=0; i< cnt; i++) {
		cout << a[i] << " " << dd[i] << endl;
	}
	
	return 0;
}

