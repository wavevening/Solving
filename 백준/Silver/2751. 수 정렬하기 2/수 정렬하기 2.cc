#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int> v1(N);

	for (int i = 0; i < N; i++) {
		cin >> v1[i];
	}

	sort(v1.begin(), v1.end());

	for (int i = 0; i < N; i++) {
		cout << v1[i] << '\n';
	}

	return 0;
}