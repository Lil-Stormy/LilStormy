#include <bits/stdc++.h>


using namespace std;

struct ThiSinh {
	string ten; 
	string dob;
	double d1, d2, d3;
	double tong;
};

void nhap(ThiSinh &a) {
	getline(cin, a.ten);
	getline(cin, a.dob);
	cin >> a.d1 >> a.d2 >> a.d3;
	getchar();
	a.tong = a.d1 + a.d2 + a.d3;
}

void in(ThiSinh a) {
	cout << a.ten << " " << a.dob << " ";
	cout << fixed << setprecision(1) << a.tong<< endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

