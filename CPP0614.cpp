#include <bits/stdc++.h>
#define ll long long
using namespace std;

int coun = 0;

class NhanVien {
	private:
		string name, sex, dob, add, mst, hd, stt;
	public:
		NhanVien() {
			name = sex = dob = add = mst = hd = stt = "";
		}
		friend istream& operator>> (istream& in, NhanVien& n) {
			in.ignore();
			getline(in, n.name);
			getline(in, n.sex);
			getline(in, n.dob);
			getline(in, n.add);
			getline(in, n.mst);
			in >> n.hd;
			coun++;
			string strcount = to_string(coun);
			n.stt = string(  5 - strcount.length() ,'0' ) + strcount;
			
			return in;			
		}
		friend ostream& operator<< (ostream& out, NhanVien n) {
			out << n.stt << " ";
			out << n.name << " ";
			out << n.sex << " ";
			out << n.dob << " ";
			out << n.add << " ";
			out << n.mst << " ";
			out << n.hd << endl;
			
			return out;
		}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
	
