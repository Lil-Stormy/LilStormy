#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		double a1, a2, b1, b2;
		cin >> a1 >> a2 >> b1 >> b2;
		double distance = sqrt( pow((a1-b1), 2) + pow((a2-b2), 2) );
		cout << fixed << setprecision(4) << distance << endl;
	}
}
