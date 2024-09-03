#include <iostream>

using namespace std;

int main() {
	int N;
	int i = 1;
	int max = 1;

	cin >> N;

	while (1) {
		if (max >= N) {
			break;
		}
		else {
			max += (6 * i);
			i++;
		}
	}

	cout << i;
	return 0;
}
