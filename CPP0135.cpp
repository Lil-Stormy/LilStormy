#include <iostream>
#include <cmath>
#define N 1000
using namespace std;

int main() {
	//create arrSnt
	int arrSnt[N+1];
	fill(arrSnt+2, arrSnt+N, true);
	for (int i=2; i*i <= N; i++) {
		if (arrSnt[i]) {
			for (int j= i*i; j<= N; j+=i) {
				arrSnt[j] = false;
			}
		}
	}
	
	
	int tc;
	cin >> tc;
	while (tc--) {
		int a;
		cin >> a;
		for (int i=2; i*i <= a; i++) {
			if (arrSnt[i]) {
				cout << (i*i) << ' ' ;
			}
		}
		cout << endl;
	}
}
