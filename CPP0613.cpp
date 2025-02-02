#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cnt = 0;
class SinhVien {
	public:
		string msv;
		string name;
		string lop;
		string dob;
		float gpa;
		
		
		void Sinhvien() {
			msv = name = lop = dob = "";
			gpa = 0.0;
		}
		
		friend istream& operator>> (istream& in, SinhVien& s) {
			scanf("\n");
			cnt++;
			s.msv = "B20DCCN" + string( 3- to_string(cnt).length() , '0') +  to_string(cnt);
			getline(in, s.name);
			getline(in, s.lop);
			getline(in, s.dob);
			in >> s.gpa;
			
			stringstream ss(s.name);
			string temp = "";
			string word;
			while (ss >> word) {
				
				int len = word.length();
				if (word[0] >= 'a' && word[0] < 'z') {
					word[0] -= ('a' - 'A');
				}
				
				for (int i=1; i<len; i++) {
					if (word[i] >= 'A' && word[i] <= 'Z') {
						word[i] += ('a' - 'A');
					}
				}
				temp += word;
				temp += " ";
			}
			
			s.name = temp;
			
			// chuan hoa dob
			if (s.dob[2] != '/') {
				s.dob.insert(s.dob.begin() + 0, '0');
			}
			if (s.dob[5] != '/') {
				s.dob.insert(s.dob.begin() + 3, '0');
			}
			
			return in;
		}
		
		
		friend ostream& operator<< (ostream& out, SinhVien s) {
			out << s.msv << " ";
			out << s.name  ;
			out << s.lop << " ";
			out << s.dob << " ";
			out << fixed << setprecision(2) << s.gpa << endl;
			
			return out;
		}
};

bool compare(SinhVien a, SinhVien b) {
	return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n) {
	sort(ds, ds+ n, compare);
} 


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
