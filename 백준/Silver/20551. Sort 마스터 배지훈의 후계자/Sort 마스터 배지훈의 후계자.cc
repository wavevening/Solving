#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	vector<int> arr;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		arr.push_back(A);
	}

	sort(arr.begin(), arr.end());
	
	for (int j = 0; j < M; j++) {
		int D;
		cin >> D;

		auto it = lower_bound(arr.begin(), arr.end(), D);

		if (it != arr.end() && *it == D) {
			cout << it - arr.begin() << '\n'; 
		}
		else {
			cout << -1 << '\n';
		}
	}
}