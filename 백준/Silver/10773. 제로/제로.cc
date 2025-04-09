#include <iostream>
#include <stack>

using namespace std;

int main() {
	int K, N;
	int count = 0;
	cin >> K;
	stack<int> result;

	for (int i = 0; i < K; i++) {

		cin >> N;
		if (N == 0) {
			result.pop();
		}
		else
			result.push(N);
	}

	while (!result.empty()) {
		count += result.top();
		result.pop();
	}
		
		cout << count;

	return 0;
}