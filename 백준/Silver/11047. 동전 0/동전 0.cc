#include <iostream>
#include <stack>

using namespace std;

int main() {
	int N, K;
	int count = 0;
	cin >> N >> K;
	stack<int> coin;
	int coi;

	for (int i = 0; i < N; i++) {

		cin >> coi;
		coin.push(coi);
	}

	while (coin.top() > K) {
		coin.pop();
	}

	while (K != 0) {
		count += (K / coin.top());
		K %= coin.top();
		coin.pop();
	}
		
		cout << count;

	return 0;
}