#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
	unordered_set<int> set1;
	vector<int> vec;

	int N, M;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		set1.insert(a);
	}

	cin >> M;
	vec.resize(M, 0);

	for (int j = 0; j < M; j++) {
		int b;
		cin >> b;

		if (set1.find(b) != set1.end()) {
			vec[j] = 1;
		}
	}

	for (int j = 0; j < M; j++) {
		cout << vec[j] << "\n";
	}
	return 0;
}
