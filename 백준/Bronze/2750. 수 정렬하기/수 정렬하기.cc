#include <iostream>

using namespace std;

int main() {
	int arr[1000]{ 0 };

	int n, t;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = n; i > 0; i--) { // bubble sort
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
