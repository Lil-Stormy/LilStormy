#include <bits/stdc++.h>
#include <cctype>
#define ll long long
using namespace std;

int main() {
	//createsang();
	string s;
	cin >> s;
	int len = s.length();
	for (int i=0; i< len ; i++) {
		char temp = tolower(s[i]);
		if (temp == 'o' || temp == 'a' || temp == 'e' || temp == 'i' || temp == 'u' || temp == 'y' ) {
			continue;
		}
		else {
			cout << '.' << temp ;
		}
	}




	
	return 0;
}

