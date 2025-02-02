#include <bits/stdc++.h>
#define ll long long
using namespace std;

string slower(string a) {
	int len = a.length();
	for (int i=0; i< len; i++) {
		a[i] = tolower(a[i]);
	}
	return a;
}
int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> vec;
	int len = 0;
	while (ss >> word) {
		vec.push_back(word);
		len++;
	}
	
	string ten = vec[len-1];
	ten = slower(ten);
	cout << ten ;
	
	for (int i=0; i< len-1; i++) {
		char x = vec[i][0];
		x = tolower(x);
		cout << x;
	}
	
	cout << "@ptit.edu.vn" ;
	
	
	return 0;
}

