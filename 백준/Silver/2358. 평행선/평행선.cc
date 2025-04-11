#include <iostream>
#include <map>

using namespace std;

int main() {
	int N;

	cin >> N;

	map<int, int> dotx;
	map<int, int> doty;

	int count = 0;

	for (int i = 0; i < N; i++) {
		int x, y;

		cin >> x >> y;

		dotx[x]++;
		doty[y]++;
	}

	for (auto dot : dotx) {
		if (dot.second >= 2)
			count++;
	}

	for (auto dot : doty) {
		if (dot.second >= 2)
			count++;
	}
	
	cout << count;

	return 0;

}
