#include <iostream>
#include <vector>
using namespace std;

int main() {
	int k;
	int n;
	int T;
	int apt;
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k;
		cin >> n;

		vector<vector<int>> apt(k + 1, vector<int>(n + 1, 0));

		for (int i = 0; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 0) apt[0][j] = j;
				else if (j == 1) apt[i][1] = 1;
				else {
					apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
				}
			}
		
	}
		cout << apt[k][n] << endl;
	}

	return 0;
}