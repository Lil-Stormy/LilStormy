#include <bits/stdc++.h>
#define ll long long
using namespace std;
// a, b
// tim kiem tu a, bat dau o nhung ki tuj co trong b
// dem so ki tu, =b thi break;

//a.erase(a.begin() + 1);

bool login(string a, string b) { //  a -> b
	int lena = a.length();
	int lenb = b.length();
	if (lena < lenb) return false;
	for (int i = 0; i<= lena - lenb; i++) { // i -> a
		bool isSame = true;
		for (int j=0; j< lenb; j++) { //  j -> b
			if (a[i+j] != b[j]) {
				isSame = false;
				break;
			}
		}
		if (isSame) return true;
	}
	return false;
}

int main() {
//	ios_base :: sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		
	}

	
	return 0;
}

