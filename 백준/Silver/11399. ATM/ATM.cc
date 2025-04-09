#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	int arr[1000]{ 0 };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int wait = 0;
	int total = 0;

	for (int i = 0; i < N; i++) {
		wait += arr[i];
		total += wait;
	}

	cout << total;

	return 0;
}