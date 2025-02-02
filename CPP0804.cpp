#include <bits/stdc++.h>
#define ll long long
#include <fstream>
using namespace std;

int main() {
	ifstream inp;
	
	inp.open("VANBAN.in");
	string s;
	set<string> a;
	while (inp >> s) {
		int len = s.length();
		for (int i=0; i<len; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += ('a'-'A');
			}
		}
		a.insert(s);
	
	}
	for (auto i: a) {
		cout << i << endl;
	}
	

	
	inp.close();
	return 0;
}

