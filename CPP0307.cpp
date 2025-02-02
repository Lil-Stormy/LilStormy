#include <bits/stdc++.h>
#include <set>

using namespace std;
//dung set va erase()
void printset( set<string> s) {
	for (auto it = s.begin(); it!= s.end(); it++) {
		cout << *it << " " ;
	}
	cout << endl;
}




int main() {
	int tc;
	cin >> tc;
	getchar();
	while (tc--) {
		string a, b;// string a - string b
		getline(cin, a);
		getline(cin, b);
		set<string> s;
		stringstream ss(a);
		string word;
		
		while (ss>> word) {
			s.insert(word);
		}
		
		stringstream ss2(b);
		while (ss2 >> word) {
			s.erase(word);
		}
		
		printset(s);


	}
	return 0;
}

