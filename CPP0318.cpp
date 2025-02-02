#include <bits/stdc++.h> 

using namespace std;

bool sautam(char a) {
	if (a=='6' || a=='8') return true;
	return false;
}
bool dk1(string str) {
	// bang nhau
	if (str[5] == str[6] && str[6] == str[7] && str[9] == str[10]) return true;
	return false;
}
bool dk2(string str) {
	// tang ngat
	if (str[5] < str[6] && str[6] < str[7] && str[7] < str[9] && str[9] < str[10] ) {
		return true;
	}
	return false;
}
bool dk3(string str) {
	// 6 8
	if ( (sautam(str[5])) && (sautam(str[6])) && (sautam(str[7])) && (sautam(str[9])) && (sautam(str[10])) ) {
		return true;
	}
	return false;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		//cout << str[5] << endl;
		if (dk1(str) || dk2(str) || dk3(str)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
