#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string str, s;
    	getline(cin, str);
    	int d = 0;
    	stringstream ss(str);
    	while(ss >> s) d++;
    	cout << d << endl;
    }
}
