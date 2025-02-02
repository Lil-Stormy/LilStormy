#include <iostream>
#include <iomanip>

using namespace std;

const double pts = 2.0/3;
double check( char correctAns, char ans) {
	if (ans == correctAns) {
		return pts;
	}
	return 0;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int code;
		char ans[15];
		cin >> code;
		for (int i=0; i< 15; i++) {
			cin >> ans[i];
			
		}
		
		char ans101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char ans102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		double point=0;
		if (code == 101) {
			for (int i=0; i< 15; i++) {
				double aPoint= check(ans101[i], ans[i]);
				point += aPoint;
			}
		}
		
		if (code == 102) {
			for (int i=0; i< 15; i++) {
				point += check(ans102[i], ans[i]);
			}
		}
		
		cout <<fixed << setprecision(2) << point << endl;
	}
}
