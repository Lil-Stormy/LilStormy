#include <bits/stdc++.h>


using namespace std;

struct SinhVien {
	string ten;
	string lop;
	string dob;
	double gpa;
};

void nhap(SinhVien &a) {
	getline(cin, a.ten);
	cin >> a.lop >> a.dob >> a.gpa;
	getchar();
	// chuan hoa dob:
	string str = a.dob;
	if (str[1] == '/') {
		str.insert(str.begin() +0, '0');
	}
	if (str[4] == '/') {
		str.insert(str.begin() + 3, '0');
	}
	a.dob = str;
}

void in(SinhVien a) {
	cout << "B20DCCN001 " << a.ten << ' ' << a.lop << ' ' << a.dob << ' ' ;
	cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

