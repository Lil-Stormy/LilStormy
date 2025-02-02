#include <iostream>
#include <cmath>

using namespace std;

bool check(char a, char b) {
	if (abs(a-b) == 1) return true;
	return false;	
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string a;
		cin >> a;
		int len = a.length();
		bool flag = true;
		for (int i=0; i< len -1; i++) {
			if (!check(a[i], a[i+1] )) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
