#include <bits/stdc++.h>
#define ll long long
using namespace std;

string slower(string a) {
	int len = a.length();
	for (int i=0; i<len; i++) {
		a[i] = tolower(a[i]);
	}
	return a;
}
int main() {
	int tc;
	cin >> tc;
	getchar();
	vector<string> ans; // haivt, hainq,...
	vector<int> dd;
	
	
	while (tc--) {
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
		
		string a = vec[len-1];
		a = slower(a);
		for (int i=0; i<len-1; i++) {
			char temp =  tolower(vec[i][0]) ;
			a.push_back(temp);
		}
		
		// search()
		bool isDup = false;
		for (int i=ans.size()-1; i>=0 ; i--) {
			if (ans[i] == a) {
				isDup = true;
				ans.push_back(a);
				dd.push_back(dd[i] +1);
				break;
			}
		}
		
		if (!isDup) {
			ans.push_back(a);
			dd.push_back(1);
		}
		
	}
	
	for (int i=0; i< ans.size() ; i++)  {
		if (dd[i] == 1) {
			cout << ans[i] << "@ptit.edu.vn" << endl;
		}
		
		else {
			cout << ans[i] << dd[i] << "@ptit.edu.vn" << endl;
		}
	}
	
	
	
	return 0;
}

