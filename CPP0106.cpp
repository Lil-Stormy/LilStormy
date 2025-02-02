#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool check(string str, int len) {
	int a =0;
	int b= len-1;
	while (a<b) {
		if (str[a] != str[b]) {
			return false;
		}
		a++;
		b--;
	}
	return true;
}

int main() {
	int tc;
	cin >> tc;
	getchar();
	while (tc--) {
		string str;
		cin >> str;
		int len = str.size() ;
		
		if (check(str, len)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

