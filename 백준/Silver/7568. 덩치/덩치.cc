#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	vector<pair<int, int>> insert;	
		
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		insert.push_back(make_pair(a, b));
	}


	for (int i = 0; i < N; i++) {
		int rank = 1;
		
		for (int j = 0; j < N; j++) { 

			if (insert[i].first < insert[j].first && insert[i].second < insert[j].second) {
				rank++; 
			}
		}
		cout << rank << ' ';
	}

	return 0;
}