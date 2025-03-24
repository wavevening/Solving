// select sort
#include <iostream>

using namespace std;

int main() {
	long long arr[3]{ 0 };
	
	int code = 0;
	long long max = 0;

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	for (int i = 2; i >= 0; i--) {
		max = 0;
		for (int j = 0; j <= i; j++) {
			
			if (max < arr[j]) {
				max = arr[j];
				code = j;
			}
		}

		long long t = arr[i];
		arr[i] = max;
		arr[code] = t;
	}

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}