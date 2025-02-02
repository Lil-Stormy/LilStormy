#include <bits/stdc++.h>


using namespace std;

class SinhVien {
	public:
		string ten;
		string lop;
		string dob;
		string msv = "B20DCCN001";
		double gpa;
	
		void nhap() {
			getline(cin, ten);
			cin >> lop >> dob >> gpa;
			getchar();
			
			if (dob[1] == '/')  dob.insert(dob.begin() + 0, '0');
			if (dob[4] == '/')  dob.insert(dob.begin() + 3, '0');
		}
		
		void xuat() {
			cout << msv << ' ' << ten << ' ' << lop << ' ' << dob << ' ';
			cout << fixed << setprecision(2) << gpa;
		}
};
int main() {
	
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

