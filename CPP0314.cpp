#include <bits/stdc++.h>


using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	string s;
	vector<string> str;
	int len =0;
	
	while (n--) {
		getline(cin, s);
		bool isDup = false;
		for (int i=0; i<len; i++) {
			if (s == str[i]) {
				isDup = true;
				break;
			}
		}
		if (!isDup) {
			str.push_back(s);
			len++;
		}
		
	}
	cout << len << endl;
	



	
	return 0;
}

