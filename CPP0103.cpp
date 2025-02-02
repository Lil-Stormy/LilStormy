#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double n;
	cin >> n;
	double sum =0;
	for (double i=n; i> 0; i--) {
		sum += (1/i);
	}
	cout << fixed << setprecision(4) << sum ;
}
