#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
using namespace std;

class SinhVien {
	private:
		string msv = "B20DCCN001";
		string name;
		string lop;
		string dob;
		double gpa;
		
	public:
		friend istream& operator>> (istream& in, SinhVien& s) {
			getline(in, s.name);
			getline(in, s.lop);
			getline(in, s.dob);
			s.fixdob();
			in >> s.gpa;
			getchar();
			
			return in;
		}
		
		friend ostream& operator<< (ostream& out, const SinhVien& s) {
			out << s.msv << " ";
			out << s.name << " ";
			out << s.lop << " ";
			out << s.dob << " ";
			out << fixed << setprecision(2) << s.gpa << " ";
			return out;	
		}
		
		void fixdob() {
			if (dob[2] != '/' ) {
				dob.insert( dob.begin() + 0,'0');
			}
			if (dob[5] != '/') {
				dob.insert(dob.begin() + 3, '0');
			}
		}
		
		
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
