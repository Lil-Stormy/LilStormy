#include <bits/stdc++.h>


using namespace std;

int check_so(vector<string> a) {
	// 0: chan, 1: le, 2: Ko uu the
	int chanle[2] = {0,0};
	// [0]: chan, [1] : le
	for (int i=0; i< a.size(); i++) {
		int temp = stoi(a[i]);
		if (temp%2==0) {
			chanle[0]++;
		}
		else if (temp%2==1) {
			chanle[1]++;
		}
	}
	if (chanle[0] > chanle[1] ) return 0;
	if (chanle[1] > chanle[0] ) return 1;
	return 2;
	
}

int main() {
	int tc;
	cin >> tc;
	getchar();
	while (tc--) {
		string s;
		getline(cin, s);
		//tach chu
		// ktra so chu 
		//ktra tung ki tu
		vector<string> a;
		stringstream ss(s);
		string word;
		int dem=0;
		
		while (ss >> word) {
			dem++;
			a.push_back(word);
		}
		//cout << dem << endl;
		
		if (check_so(a) == 2) {
			cout << "NO" << endl;
			continue;
		}
		
		if (check_so(a) == 0 && dem%2==0) {
			cout << "YES" << endl;
			continue;
		}
		
		if (check_so(a) ==1 && dem%2==1) {
			cout << "YES" << endl;
			continue;
		}
		
		else 
			cout << "NO" << endl;
	
	}
	return 0;
}

