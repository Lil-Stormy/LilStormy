#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cnt = 1;
class Gv {
	public:
		string name, nganh, mgv, lname;
		
		friend istream& operator>> (istream& in, Gv& g) {
			if (cnt==1) scanf("\n"); 
			getline(in, g.name);
			getline(in, g.nganh);
			g.mgv = "GV" + string(2 - to_string(cnt).length() , '0') + to_string(cnt);
			cnt ++;
			//
			stringstream ss(g.nganh);
			string word;
			string temp = "";
			while (ss >> word) {
				if (word[0] >= 'a' && word[0] <= 'z') {
					word[0] -= ('a' - 'A') ;
				}
				temp += word[0];
			}
			g.nganh = temp;
			
			// lay lastname
			g.lastname();
			
			return in;
		}
		
		void lastname() {
			stringstream ss(name);
			string word;
			while (ss >> word) {
				
			}
			lname = word;
		}
		
		friend ostream& operator<< (ostream& out, Gv g) {
			out << g.mgv << " ";
			out << g.name << " ";
			out << g.nganh << endl;
			
			return out;
		}
};

bool compare(Gv a, Gv b) {
	if (a.lname != b.lname) {
		return (a.lname < b.lname);
	}
	else return (a.mgv < b.mgv);
}
void sapxep(Gv ds[], int n) {
	sort(ds, ds+n, compare);
}

int main() {
	int n;
	cin >> n;
	Gv ds[n];
	for (int i=0; i<n; i++) {
		cin >> ds[i];
	}
	sapxep(ds, n);
	for (int i=0; i<n; i++) {
		cout << ds[i];
	}
}

