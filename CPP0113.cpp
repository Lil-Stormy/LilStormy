#include <iostream>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		if (n%100 == 86) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
