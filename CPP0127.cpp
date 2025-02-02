#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//create array
	const int N = 1000000;
	bool arrSnt[1000000];
	fill(arrSnt, arrSnt+N, true);
	arrSnt[0] = false;
	arrSnt[1] = false;
	for (int i=0; i*i < N; i++) {
		if(arrSnt[i]) {
			for (int j = i*i; j< N; j+=i) {
				arrSnt[j]  =false;
			}
		}
	}
	//cout << "Nhap: "<< endl;
	int tc;
	cin >> tc;
	while (tc--) {
		int a;
		cin >> a;
		int midA = a/2;
		bool isPrint = false;
		for (int i=2; i<= midA; i++) {
			if (arrSnt[i] && arrSnt[a-i]) {
				cout << i << ' ' << a-i << endl;
				isPrint = true;
				break;
			}
		}
		if (!isPrint) cout << endl;
		
					
	}
}
