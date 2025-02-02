#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cnt = 0;
class SinhVien {
	private:
		string msv, name, lop, dob;
		float gpa;
	public:
		SinhVien() {
			msv = name = lop = dob = "";
			gpa = 0.0;
		}
		
		friend istream& operator>> (istream& in, SinhVien& s) {
			in.ignore();
			getline(in, s.name);
			getline(in, s.lop);
			getline(in, s.dob);
			in >> s.gpa;
			
			cnt++;
			string strcnt = to_string(cnt);
			s.msv = "B20DCCN" + string(3 - strcnt.length(), '0') + strcnt ;
			
			return in;
		}
		
		friend ostream& operator<< (ostream& out, SinhVien& s) {
			out << s.msv << " ";
			out << s.name << " ";
			out << s.lop << " ";
			if(s.dob[2] != '/') s.dob.insert(s.dob.begin() + 0,'0');
			if(s.dob[5] != '/') s.dob.insert(s.dob.begin() + 3, '0');
			out << s.dob << " ";
			out << fixed << setprecision(2) << s.gpa << endl;
			return out;
		}
};
int main() {
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

