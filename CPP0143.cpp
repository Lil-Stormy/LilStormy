#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main() {
	//create fibonanci
	ll arr[92];
	arr[0] = 1;
	arr[1] =1;
	int i=2;
	while (i<92) {
		arr[i] = arr[i-1] + arr[i-2];
		i++;
	}
	
	int tc;
	cin >> tc;
	while (tc--) {
		int a;
		cin >> a;
		cout << arr[a-1] << endl;
	}
}
