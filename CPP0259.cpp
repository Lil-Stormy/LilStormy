#include <bits/stdc++.h>


using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int hang1, cot1, hang2, cot2;
	cin >> hang1 >> cot1 >> cot2;
	hang2 = cot1;
	
	int arr1[hang1][cot1];
	int arr2[hang2][cot2];
	
	for (int i=0; i< hang1; i++) {
		for (int j=0; j< cot1; j++) {
			cin >> arr1[i][j];
		}
	}
	
	for (int i=0; i< hang2; i++) {
		for (int j=0; j< cot2; j++) {
			cin >> arr2[i][j];
		}
	}

	int arrAns[hang1][cot2];
	
	for (int i=0; i< hang1; i++) {
		for (int j=0; j< cot2; j++) {
			arrAns[i][j] = 0;
			for (int k = 0; k< hang2; k++) {
				arrAns[i][j] += ( arr1[i][k] * arr2[k][j]) ;
			}
			cout << arrAns[i][j] << " ";
		}
		cout << endl;
	}


	
	return 0;
}

