#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int result = 0;

	for (long i = 1; i <= N - 1; i++) {
		int sum = i;
		int temp = i;

		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == N) {
			result = i;
			break;
		}
}
	cout << result;
}