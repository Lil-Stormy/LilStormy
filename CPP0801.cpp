#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(string s) {
	// do dai
	// ki tu
	
	for (int i=0; i< s.length(); i++) {
		if (s[i] > '9' || s[i] <'0' ) {
			return 0;
		}	
	}
	
	if (s.length() > 10) {
		//cout << "too long" << endl;
		return 0;
	}
	
	return 1;
}


int main() {
	string s;
	fstream inp;
	
	inp.open("DATA.in", ios::in); // sua ten file!
	
	ll sum=0;
	while (1) {
		//code here
		inp >> s;
		if (inp.eof()) break;
		if (check(s)) {
			//cout <<"s= " << s << endl;
			sum = sum + stoi(s);
		}
		
	}
	
	inp.close();
	cout << sum << endl;
}

