#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Sv {
	public:
		string msv, name, lop, mail;
		
		void nhap() {
			scanf("\n");
			getline(cin, msv);
			getline(cin, name);
			getline(cin, lop);
			cin >> mail;
		}
		
		void xuat() {
			cout << msv << " ";
			cout << name << " ";
			cout << lop << " ";
			cout << mail << endl ;
		}
};
int main() {
	int n;
	cin >> n;
	Sv ds[n];
	for(int i=0; i<n; i++) {
	
		ds[i].nhap();
	}
	
	int q;
	string qlop;
	cin >> q;
	for (int i=0; i< q; i++) {
		cin >> qlop;
		cout << "DANH SACH SINH VIEN LOP " << qlop << ":" << endl;
		for (int i=0; i< n; i++) 
			if (ds[i].lop == qlop)  ds[i].xuat();
		
	}



	return 0;
}

