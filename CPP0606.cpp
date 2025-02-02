#include <bits/stdc++.h>
#include <vector>
using namespace std;

class NhanVien {
	private:
		string mnv = "00001";
		string ten;
		string gt;
		string dob;
		string dc;
		string mst;
		string hd;
	public:
		friend istream &operator>> (istream& mycin , NhanVien& a) {
			getline(mycin, a.ten);
			getline(mycin, a.gt);
			getline(mycin, a.dob);
			getline(mycin, a.dc);
			getline(mycin, a.mst);
			getline(mycin, a.hd);
			return mycin;
		}
		
		friend ostream &operator >> (ostream& mycout, NhanVien& a) {
			mycout << a.mnv << ' ' << a.ten << ' ' << a.gt << ' ' << a.dob  << ' ' << a.dc  << ' ' << a.mst  << '\n' << a.hd << endl;
			return mycout;
		}		
};

int main() {
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}

