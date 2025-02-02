#include <bits/stdc++.h>


using namespace std;
// su dung mang danh dau N + ham de quy spread de danh dau cac vi tri so 1 lien nhau
bool N[101][101] = {false};
int M[101][101] = {0};

int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void spread(int i, int j, int n, int m ) {
	N[i][j] = true;
	for (int k=0; k< 8; k++) {
		int x = i + X[k];
		int y = j + Y[k];
		if (M[x][y] ==1 && !N[x][y] && x >=0 && y >=0 && x < n && y <m) { // 6dk
			//cout << "Found at " << x << y << endl;
			spread(x, y, n, m);
		}
	}
}



int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		memset(N, false, sizeof(N));
		
		int n, m;
		cin >> n >> m;
		for (int i=0; i< n; i++) {
			for (int j=0; j< m; j++) {
				cin >> M[i][j] ;
			}
		}
		
		
		int count =0;
		for (int i=0; i< n; i++) {
			for (int j=0; j< m; j++) {
				if (M[i][j]==1 && !N[i][j]) {
					count++;
					//cout << "new found:" << i << j << endl;
					spread(i, j, n, m);
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}


